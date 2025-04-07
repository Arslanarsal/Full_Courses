const express = require('express')
const { handleShortUrl}  = require('../controller/url.controller.js')
const router = express.Router();

router.post('/', handleShortUrl)

module.exports = { router };