import mongoose from 'mongoose'

const userScheme = new mongoose.Schema({
    username: {
        type: String,
        required: true,
        unique: true,
        lowercase: true,
    },
    email: {
        type: String,
        require: true,
        unique: true,
        lowercase: true,
    },
    password: {
        type: String,
        required: true,
    },

}, { timestamps: true })


export const user = mongoose.model('user', userScheme);