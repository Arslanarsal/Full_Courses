const express = require(`express`)
const { ConnectDB } = require('./connection.js')
// const users = require(`./MOCK_DATA.json`);
const app = express();
exports.app = app;
// const fs = require("fs");

const PORT = 3000
app.use(express.urlencoded({ extended: false }))
app.use(express.json())


// app.get('/api/user', (req, res) => {
//     const html = `
//     <ul>
//     ${users.map(user => `<li> ${user.first_name} </li>`).join("")}
//     </ul>
//     `
//     res.send(html);
// })



// app.get('/user', (req, res) => {
//     res.setHeader("name", "Arslan");
//     res.json(users);
// })

const userRoutes = require('./routes/user.route.js')
ConnectDB();

app.use('/api/user', userRoutes)
app.use('/api/user', userRoutes)
app.use('/api/user', userRoutes);

// app.post('/api/user',  async (req, res) => {
//     const body = req.body;
//     console.log("Body", body);

//     const result = await userMode.create({
//         name: req.body.first_name,
//         username: req.body.last_name,
//         email: req.body.email,
//         gender: req.body.gender
//     });

//     console.log("Result ", result);

//     return res.status(201).json("Success")

//     // users.push({ ...body, id: users.length + 1 })
//     // fs.writeFile("MOCK_DATA.json", JSON.stringify(users), (err, data) => {
//     //     return res.json("Status in post");
//     // })

// })

// app.patch('/api/user/:id', (req, res) => {
//     //Edit user
//     return res.json("Status Pending in patch");
// })

// app.delete('/api/user/:id', (req, res) => {
//     const id = Number(req.params.id);
//     let index = users.findIndex((user) => user.id === id);
//     if (index != -1) {
//         users.splice(index, 1);
//     }
//     fs.writeFile("MOCK_DATA.json", JSON.stringify(users), (err, data) => {
//         return res.json("Status Pending in delete");
//     })

// })


// app.route('/api/user/:id').get((req, res) => {
//     const user_id = Number(req.params.id);
//     const user = users.find((user) => user.id === user_id);
//     res.send(user);
// }).post((req, res) => {
//     //Create user
//     return res.send("Status Pending");
// }).patch((req, res) => {
//     //Edit user
//     return res.send("Status Pending");
// }).delete((req, res) => {
//     //Delete User
//     return res.send("Status Pending");
// })

app.listen(PORT, () => {
    console.log(`Server is runing on port No ${PORT}`)
})