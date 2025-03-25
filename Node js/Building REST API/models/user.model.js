const mongoose = require('mongoose');
const { timeStamp } = require('console');


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

const userModel = mongoose.model("user", userScheme)
module.exports = userModel;