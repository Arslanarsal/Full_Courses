const { log } = require("console");
const express = require(`express`);
const path = require(`path`);
const app = express();
const usermodel = require(`./Models/user`);

app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.set('view engine', 'ejs');
app.use(express.static(path.join('__dirname', 'Public')));

app.get('/', (req, res) => {
    res.render('main')
})

app.post('/create', async (req, res) => {
    let { name, email, image } = req.body;
    let createModel = await usermodel.create({
        name,
        email,
        image
    })
    res.redirect('/');
})

app.get('/read', async (req, res) => {
    let users = await usermodel.find();
    res.render('read', { users });
})
app.get('/delete/:id', async (req, res) => {
    await usermodel.findOneAndDelete({ _id: req.params.id });
    res.redirect('/read');
})

app.listen(3000, () => {
    console.log("It's runing");
})