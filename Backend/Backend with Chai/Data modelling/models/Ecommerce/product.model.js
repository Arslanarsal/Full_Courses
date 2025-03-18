import mongoose from 'mongoose'

const productScheme = new mongoose.Schema({

} , {timestamps : true})

export const product = mongoose.model('product', productScheme);