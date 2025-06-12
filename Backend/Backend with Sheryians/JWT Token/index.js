const express = require(`express`);
const app = express();
const bcrypt = require(`bcrypt`);
const usermodel = require(`./usermodel/user`)
const path = require(`path`);
const cookieParser = require("cookie-parser");
app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')))
app.set(`view engine`, `ejs`);

app.get('/', (req, res) => {
    res.render(`main`);
});

app.get('/login', (req, res) => {
    res.render(`login`);
});

app.post('/login', async (req, res) => {
    // let user = await usermodel.findOne({ email: req.body.email });
    // if (!user) {
    //     res.send("Something went wrong: User not found");
    // } else {
    //     res.send("Correct email");
    // }
    let user = await usermodel.findOne({ email: req.body.email });
    if (!user) {
        res.send("SomeThing went wrong");
    } 

    bcrypt.compare(req.body.password , user.password ,(err , result)=>{
        res.send(result);
    })
});

app.post('/create', (req, res) => {
    let { name, email, age, password } = req.body;

    bcrypt.genSalt(10, (err, sault) => {
        bcrypt.hash(password, sault, async (err, hash) => {
            let createUser = await usermodel.create({
                name,
                email,
                age,
                password: hash
            })
            res.send(createUser);
        })
    })



});


app.listen(3000, () => {
    console.log(`It's rining`);
})