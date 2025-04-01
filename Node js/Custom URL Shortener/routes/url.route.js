const express = require('express')
const shorterUrl = require('../controllers/shorterUrl.js')
const router = express.Router()

router.route('/').post(shorterUrl)

module.exports = router