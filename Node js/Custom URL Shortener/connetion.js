const mongoose = require('mongoose')

async function connect(url) {
   return await mongoose.connect(url);
}



module.exports = connect