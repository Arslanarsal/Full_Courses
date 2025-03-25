const { userModel } = require('../models/user.model.js')


const handleAllUser = async function (req, res) {
    try {
        const aldbUser = await userModel.find({});
        return res.json(aldbUser);
    } catch (error) {
        return res.status(500).json({ message: "Server error", error: error.message });
    }
};

const handleGetUserById = async function (req, res) {

    const user_id = Number(req.params.id);
    const user = userModel.find((user) => user.id === user_id);
    res.send(user);
};

const handleCreateUser = async function (req, res) {
    try {
        const { name, username, email, gender } = req.body;
        if (!name || !username || !email || !gender) {
            return res.status(400).json({ error: "All fields are required" });
        }

        const newUser = await UserModel.create({ name, username, email, gender });
        res.status(201).json({ message: "User created successfully", user: newUser });
    } catch (error) {
        res.status(500).json({ error: "Failed to create user" });
    }
};

module.exports = { handleAllUser, handleGetUserById, handleCreateUser }; 
