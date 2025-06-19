const express = require('express')
const {AlluserUrl} = require('../controllers/shorterUrl.js')
const router = express.Router()

router.get('/' , AlluserUrl)


module.exports = router