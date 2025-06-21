const express = require('express')
const path = require('path')
const connect = require('./connetion.js')

const app = express();
app.set('view engine', 'ejs')
app.set('views', path.resolve('./views'))
app.use(express.json());
app.use(express.urlencoded({ extended: true }))

connect("mongodb://127.0.0.1:27017/ShortUrl").then(() => {
    console.log("Mongodb Connect!")
}).catch(function (error) {
    console.log("Error on connection DB " + error.message)
})


const routeurl = require('./routes/url.route.js');
const allUserRouter = require('./routes/allUser.js')
const staticRoute = require('./routes/staticRouter.js')
const userRoute = require('./routes/user.js')


app.use('/', staticRoute);
app.use('/url', routeurl)
app.use('/aluser', allUserRouter);
app.use('/user', userRoute)



// const urlModel = require('./models/url.model.js');
// app.get('/:shortId', async (req, res) => {
//     const urll = await urlModel.findOneAndUpdate(
//         { shortUrl: req.params.shortId },
//         {
//             $push: {
//                 history: {
//                     timestamp: Date.now()
//                 }
//             }
//         }, {
//         new: true
//     }
//     )
//     res.status(200).json(urll)
// })

app.listen(3000, () => {
    console.log("Runing !!")
})
