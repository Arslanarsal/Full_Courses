const mongoose = require(`mongoose`);

let postscheme  = mongoose.Schema({
    user: {
        type: mongoose.Schema.Types.ObjectId,
        ref: "user"
    },

    date: {
        type: Date,
        default: Date.now
    },
    content: String,
    likes: [
        {
            type: mongoose.Schema.Types.ObjectId,
            ref: "user"
        }
    ]

})

module.exports = mongoose.model('post' , postscheme);