const mongoose = require('mongoose')

const userScheme = mongoose.Schema({
    name: {
        type: String,
        required: true,
        trim: true
    },
    password: {
        type: String,
        required: true
    },
    email: {
        type: String,
        required: true,
        unique: true
    }
})

const userModel  = mongoose.model('user' , userScheme);

module.exports = userModel;