const express = require('express');
const path = require('path');
const app = express();


app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.use(express.static(path.join(__dirname, "public")));

app.set("view engine", "ejs");

app.use("/", function (req, res) {
    res.render("index.ejs")
})


app.listen(3000, () => {
    console.log("Server is runing on port 3000");
})