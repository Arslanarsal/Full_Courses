const express = require(`express`)
const mongoose = require('mongoose');
const users = require(`./MOCK_DATA.json`);
const app = express();
const fs = require("fs");
const { timeStamp } = require('console');
const PORT = 3000
app.use(express.urlencoded({ extended: false }))
app.use(express.json())


mongoose.connect('mongodb://127.0.0.1:27017/Test')
    .then(() => console.log("Dtabase is Connected!!"))
    .catch((err) => console.log("Error on Connected!!", err))

const userScheme = mongoose.Schema({
    name: {
        type: String,
        required: true,
    },
    username: {
        type: String,
        required: true
    },
    email: {
        type: String,
        required: true,
        unique: true
    },
    gender: {
        type: String,
        required: true
    }
}, { timeStamp: true })

const userMode = mongoose.model("user", userScheme)
userMode.create()
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

app.get('/api/user', async (req, res) => {
    const aldbUser = await userMode.find({});
    // const user_id = Number(req.params.id);
    // const user = users.find((user) => user.id === user_id);
    res.json(aldbUser);
})

app.get('/api/user/:id', (req, res) => {
    const user_id = Number(req.params.id);
    const user = users.find((user) => user.id === user_id);
    res.send(user);
})

// app.post('/api/user', async (req, res) => {
//     try {
//         const { name, username, email, gender } = req.body;
//         if (!name || !username || !email || !gender) {
//             return res.status(400).json({ error: "All fields are required" });
//         }

//         const newUser = await UserModel.create({ name, username, email, gender });
//         res.status(201).json({ message: "User created successfully", user: newUser });
//     } catch (error) {
//         res.status(500).json({ error: "Failed to create user" });
//     }
// });

app.post('/api/user',  async (req, res) => {
    const body = req.body;
    console.log("Body", body);

    const result = await userMode.create({
        name: req.body.first_name,
        username: req.body.last_name,
        email: req.body.email,
        gender: req.body.gender
    });

    console.log("Result ", result);

    return res.status(201).json("Success")

    // users.push({ ...body, id: users.length + 1 })
    // fs.writeFile("MOCK_DATA.json", JSON.stringify(users), (err, data) => {
    //     return res.json("Status in post");
    // })

})

app.patch('/api/user/:id', (req, res) => {
    //Edit user
    return res.json("Status Pending in patch");
})

app.delete('/api/user/:id', (req, res) => {
    const id = Number(req.params.id);
    let index = users.findIndex((user) => user.id === id);
    if (index != -1) {
        users.splice(index, 1);
    }
    fs.writeFile("MOCK_DATA.json", JSON.stringify(users), (err, data) => {
        return res.json("Status Pending in delete");
    })

})


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