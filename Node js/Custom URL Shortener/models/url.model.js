const mongoose = require('mongoose');

const urlSchema = new mongoose.Schema({
    shortUrl: {
        type: String,
        required: true,
        unique: true
    },
    requiredUrl: {
        type: String,
        required: true
    },
    history: {
        type: [{ timestamp: { type: Number } }],
        default: []
    }
}, { timestamps: true });

const urlModel = mongoose.model("url", urlSchema);
module.exports = urlModel;
