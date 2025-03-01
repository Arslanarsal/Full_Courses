const express = require(`express`);
const app = express();
const userModel = require(`./modules/user`);
const postModel = require(`./modules/post`);
const cookieParser = require(`cookie-parser`);
const bcrypt = require(`bcrypt`);
const jwt = require(`jsonwebtoken`) 

app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use(cookieParser());
app.set('view engine', 'ejs');

function islogedIn(req, res, next) {
    if (req.cookies.token === "") {
        res.render("login");
    } else {
        let data = jwt.verify(req.cookies.token, "abcd");
        req.user = data;
        next();
    }
}

app.get('/', function (req, res) {
    res.render('index');
})

app.get('/login', function (req, res) {
    res.render('login');
})

app.get('/profile', islogedIn, async function (req, res) {
    let user = await userModel.findOne({ email: req.user.email }).populate('post');
    
    res.render("profile", { user });
})

app.post('/postss', islogedIn, async function (req, res) {
    let user = await userModel.findOne({ email: req.user.email });

    let { post_content } = req.body;

   let post = await postModel.create({
        user: user._id,
        content: post_content,  
    })
    user.post.push(post._id);
    await user.save();
})

app.get('/logout', function (req, res) {
    res.cookie("token", "");
    res.redirect("/login");
})

app.post('/register', async (req, res) => {
    let { name, username, password, age, email } = req.body;
    let user = await userModel.findOne({ email });
    if (user) {
        res.status(500).send("User already Registered");
    }
    bcrypt.genSalt(10, (err, salt) => {
        bcrypt.hash(password, salt, async (err, hash) => {
            let user = await userModel.create({
                name,
                username,
                age,
                email,
                password: hash
            })

            let token = jwt.sign({ email: email, userid: user._id }, "abcd");
            res.cookie("token", token);
            res.send("Registered");
        })
    })
})

app.post('/login', async (req, res) => {
    let { username, password } = req.body;
    let user = await userModel.findOne({ username });
    if (!user) {
        res.status(500).send("Invalid");
    }

    bcrypt.compare(password, user.password, (err, result) => {
        if (result) {
            let token = jwt.sign({ email: user.email, userid: user._id }, "abcd");
            res.cookie("token", token);
            res.redirect("/profile");
        }
        else {
            res.redirect('/login');
        }
    })

})

app.listen(3000, () => {
    console.log("Runing");
})