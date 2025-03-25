const mongoose = require('mongoose')

const ConnectDB = function () {
    mongoose.connect('mongodb://127.0.0.1:27017/Test')
        .then(() => console.log("Dtabase is Connected!!"))
        .catch((err) => console.log("Error on Connected!!", err))
}


module.exports = { ConnectDB };
