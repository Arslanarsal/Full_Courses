const mongoose = require(`mongoose`);


let postmodel = mongoose.Schema({
    postDate: String,
    user: String,
    date :{
        type : Date,
        default : Date.now,

    }
    
})

module.exports = mongoose.model(`post`, postmodel);