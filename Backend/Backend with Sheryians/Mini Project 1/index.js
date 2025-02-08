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

app.get('/', function (req, res) {
    res.render('index');
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
            res.cookie("token" , token);
            res.send("Registered");
        })
    })
    // res.redirect("/");
})

app.listen(3000, () => {
    console.log("Runing");
})