const express = require('express')
const {userSignup ,userlogin } = require('../controllers/use.control.js')


const router = express.Router();

router.post('/signup' , userSignup)

router.post('/login' , userlogin)

module.exports = router;