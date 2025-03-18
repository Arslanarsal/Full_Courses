import mongoose from "mongoose";

const CategoryScheme = new mongoose.Schema({
    name: {
        Type: String,
        require: true,
    }
}, { timestamps: true })

export const category = mongoose.model('category', CategoryScheme);