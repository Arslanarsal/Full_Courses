const { model } = require('mongoose');
const userModel = require('../models/user.model.js')
const urlModel = require('../models/url.model.js')

const userSignup = async function (req, res) {
    try {
        let { email, name, password } = req.body;
        if (!email || !name || !password) {
            return res.send("All field required")
        }
        

        let user = await userModel.create({
            name, email, password
        })

        let alluser =await urlModel.find();


        res.render("home" , {alluser})
    } catch (error) {
        res.send("Error on signUps" + error.message)
    }
}

const userlogin = async function (req, res) {
    try {
        let { email,password } = req.body;
        if (!email ||  !password) {
            return res.send("All field required")
        }

        let user = await userModel.findOne({
             email, password
        })

        if (!user) {
           return res.render('login')
        }

        let alluser =await urlModel.find();


        res.render("home" , {alluser})
    } catch (error) {
        res.send("Error on signUps" + error.message)
    }
}
module.exports = {userSignup , userlogin}