const express = require('express')
const app = express();

const connect = require('./connetion.js')
 connect("mongodb://127.0.0.1:27017/terl").then(() => {
    console.log("Mongodb Connect!")
})
app.use(express.json());
const routeurl = require('./routes/url.route.js');
const urlModel = require('./models/url.model.js');

app.use('/url', routeurl)

app.get('/aluser', async function (req, res) {
    const alluser = await urlModel.find({});
    return res.end(

        `
        <html></html>
        <head></head>
        <body> 
        <ol>
        ${
            alluser.map(user => 
                `<li>${user.requiredUrl}</li> 
                 <li>${user.short}</li>  
                 <li>${user.history.length}
                 </li>`).join(' ')
        }
        </ol>
        </body>
        `
    )
    // res.json(alluser)
})

app.get('/url/')

app.get('/:shortId', async (req, res) => {
    const urll = await urlModel.findOneAndUpdate(
        { shortUrl: req.params.shortId },
        {
            $push: {
                history: {
                    timestamp: Date.now()
                }
            }
        }, {
        new: true
    }
    )
    res.status(200).json(urll)
})

app.listen(3000, () => {
    console.log("Runing !!")
})
