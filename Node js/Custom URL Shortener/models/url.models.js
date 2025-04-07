const mongoose = require('mongoose')
mongoose.connect('mongodb://localhost:27017/sample')
const urlScheme = mongoose.Schema({
    shortId: {
        type: String,
        required: true,
        unique: true
    },
    redirectUrl: {
        type: String,
        required: true,
    },
    visitHistory: [{
        timestap: { Type: Number }
    }]
}, {
    TimeRanges: true})
const urlModel = mongoose.model("url", urlScheme)
module.exports = urlModel
