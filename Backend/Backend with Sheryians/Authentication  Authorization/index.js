const express = require(`express`);
const cookieparser = require(`cookie-parser`);
const app = express();
const bcrypt = require(`bcrypt`);
const jwt = require(`jsonwebtoken`)

app.use(cookieparser());
app.get('/', async (req, res) => {
    await bcrypt.genSalt(10, async function (err, salt) {
        console.log(salt);
        await bcrypt.hash("password", salt, function (err, hash) {
            console.log(hash);
        })
    })
    res.cookie("name", "Arslan");
    // let token = jwt.sign({ name: "Arslan" }, "serect");
    // console.log(token);

    // res.send("Hello world");
})

app.get('/read', (req, res) => {
    // console.log(req.cookies);
    let cooki = req.cookies.token;
    let data = jwt.verify(cooki, "serect")
    // console.log(data);
    res.send("Another page");
})

app.listen(3000, () => {
    console.log("It's runing");
})