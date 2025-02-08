const express = require("express");
const usermodel = require("./usermodel");
const app = express();

app.get("/", (req, res) => {
  res.send("Well come");
});

app.get('/Create', async (req, res) => {
    let createdUser = await usermodel.create({ // This is a asynscnos function
        name: "Arslan",
        username: "Arsal",
        email: "Arslanarsal455@gmail.com"
    })
    res.send(createdUser);
})

app.get('/Update', async (req, res) => {
    let updatedUser = await usermodel.findOneAndUpdate(
        { username: "Arsal" }, // Query to find the user
        { name: "M. Arslan" }, // Update to apply
        { new: true } // Option to return the updated document
    );
    res.send(updatedUser);
});

app.get('/find', async (req, res) => {
    let users = await usermodel.find(); // This will return an array of all users
    res.send(users);
});

app.get('/findone', async (req, res) => {
    let user = await usermodel.findOne({ username: "Arsal" }); // Use 'findOne' to get a single user
    res.send(user);
});

app.get('/Update', async (req, res) => {
    let DeletedUser = await usermodel.findOneAndDelete({username:"Arsal"});
    res.send(DeletedUser);
});

app.listen(3000, () => {
  console.log("Server is running");
});
