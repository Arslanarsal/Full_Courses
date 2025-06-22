const { model } = require('mongoose');
const userModel = require('../models/user.model.js')
const urlModel = require('../models/url.model.js')
const { setId } = require('../services/auth.js')
const uuid = require('uuid')
const jwt = require('jsonwebtoken')

const userSignup = async function (req, res) {
    try {
        let { email, name, password } = req.body;
        if (!email || !name || !password) {
            return res.send("All field required")
        }


        let user = await userModel.create({
            name, email, password
        })

        // const session = uuid.v4();
        const token = jwt.sign(user , "secret")
        // setId(session, user);
        res.cookie("uuid", token);

        res.redirect("/aluser")
    } catch (error) {
        res.send("Error on signUps" + error.message)
    }
}

const userlogin = async function (req, res) {
    try {
        let { email, password } = req.body;
        if (!email || !password) {
            return res.send("All field required")
        }

        let user = await userModel.findOne({
            email, password
        })

        if (!user) {
            return res.render('login')
        }
        // const session = uuid.v4();
        // setId(session, user);
         const token = jwt.sign(user , "secret")
        // setId(session, user);
        res.cookie("uuid", token);


        res.redirect("/aluser")
    } catch (error) {
        res.send("Error on signUps" + error.message)
    }
}
module.exports = { userSignup, userlogin }