const express = require('express')
const router = express.Router();


router.get("/signup" , function(req , res){
    res.render("signup")
})


router.get("/login" , function(req , res){
    res.render("login")
})

module.exports = router;