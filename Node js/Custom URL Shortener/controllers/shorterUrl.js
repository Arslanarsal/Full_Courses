const TinyURL = require('tinyurl');
const urlModel = require('../models/url.model.js')
const shorterUrl = async function (req, res) {
    const url = req.body?.url || "";
    if (!url) {
        res.status(400).json("Url not found")
    }
    const shortUrl = (await TinyURL.shorten(url)).split('/').pop();
    // console.log(shortUrl);


    const exitUrl = await urlModel.find(
        {
            $or: [{ shortUrl }, { requiredUrl: url }]
        }
    )
    // console.log(exitUrl);
    if (exitUrl.length) {
        return res.status(201).json(exitUrl);
    }

    const urlll = await urlModel.create({
       shortUrl,
        requiredUrl: url,
    });
    // console.log(urlll);

    return res.status(201).json(urlll);

}

module.exports = shorterUrl