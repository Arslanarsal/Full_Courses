const express = require('express')
const fs = require('fs');
const status = require('express-status-monitor')
const app = express();
const zlib = require('zlib');
const { pipeline } = require('stream');
app.use(status())

fs.createReadStream("./message.txt").pipe(zlib.createGzip().pipe(fs.createWriteStream("./sample.zip")))

app.get('/', function (req, res) {
    const stream = fs.createReadStream("./message.txt", "utf-8");
    stream.on("data", (chunk) => res.write(chunk))
    // stream.on("end", res.end())
    // fs.readFile("./message.txt", (err, data) => {
    //     res.end(data)
    // })
})


app.listen(3000, () => {
    console.log("Server si runing")
})