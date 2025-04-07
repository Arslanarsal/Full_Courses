const express = require('express')
const app = express();

const {router} = require('./routes/url.model.js')

app.use('/url', router);

app.listen(3000 , ()=>{
    console.log("Rining");
    
})

