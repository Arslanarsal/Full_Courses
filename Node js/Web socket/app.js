const http = require('http')
const express = require('express')
const app = express();
const path = require('path')

const { Server } = require("socket.io");
app.use(express.static(path.resolve('./public')))
const server = http.createServer(app);

const io = new Server(server)

io.on('connection', (socket) => { 
    socket.on("message", (message) => {
        io.emit("message" , message)
    })
})

app.get('/', (req, res) => {
    res.sendFile('/index')
})



server.listen(3000, () => {
    console.log(`Server runing on PORT:3000`)
}) 
