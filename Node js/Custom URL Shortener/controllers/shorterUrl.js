
const TinyURL = require('tinyurl');
const urlModel = require('../models/url.model.js')
const shorterUrl = async function (req, res) {
    const url = req.body?.url;
    if (!url) {
        res.status(400).json("Url not found")
    }

    // console.log((url));


    const shortUrl = await TinyURL.shorten(url);
    console.log(shortUrl);

    const urlll = await urlModel.create({
        shortUrl: shortUrl,
        requiredUrl: url,
        history: []
    });
    
    return res.status(201).json(urlll);
    

}

module.exports = shorterUrl