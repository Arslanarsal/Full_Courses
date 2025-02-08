const mongoose = require(`mongoose`);

mongoose.connect(`mongodb://127.0.0.1:27017/testingDualData`);


let usermodel = mongoose.Schema({
    username: String,
    email: {
        type : mongoose.Schema.type.ObjectId,
        ref : 'post'
    },
    age: Number,
    post: [{
        type: mongoose.Schema.Types.ObjectId,
        ref: 'post'
    }]
})

module.exports = mongoose.model(`user`, usermodel);