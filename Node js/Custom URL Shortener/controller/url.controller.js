const { urlModel } = require('../models/url.models.js')
var shorturl = require('shorturl');

async function handleShortUrl(req, res) {
    const { url } = req.body;

    await shorturl(url, async function (result) {
        const flash = await urlModel.findById({ shortId: result })
        if (flash) shorturl();

        urlModel.create({
            shortId : result,
            redirectUrl :url,
        })
    });

}

module.exports = { handleShortUrl }