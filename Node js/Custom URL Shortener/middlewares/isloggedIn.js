const { getId } = require('../services/auth.js')
const jwt = require('jsonwebtoken')

async function isloggedIn(req, res, next) {
    const uid = req.cookies.uuid;
    if (!uid) {
        return res.redirect('/login')
    }
    // let user = getId(uid);
    let user = jwt.verify(uid , "secret");
    if (!user) {
        return res.redirect('/login')
    }
    req.user = user;
    next();
}

module.exports = { isloggedIn };