// const http = require("http");
const express = require("express");
// const fs = require(`fs`)
// const url = require(`url`);
const app = express();

app.get("/", (req, res) => {
    return res.send("On  the / server");
})

app.get("/about", (req, res) => {
    return res.send("On  the /about server");
})

// function handle(req, res) {
//     if (req.url === "/favicon.ico") return res.end();

//     // console.log(req);      
//     // console.log("Server Started!");
//     const myUrl = url.parse(req.url, true);
//     const log = `${Date.now()} : ${req.url}  Server Request\n`;
//     console.log(myUrl);
//     fs.appendFile('./Data.txt', log, (err, data) => {
//         switch (myUrl.pathname) {
//             case '/':
//                 res.end(`On / Server  ${myUrl.query.name}`);
//                 break;
//             case '/about':
//                 res.end(`On /about Server  ${myUrl.query.name}`);
//                 break;
//             default:
//                 res.end("Error 404 Not found");
//                 break;
//         }
//     })
// }

// const server = http.createServer(handle);

app.listen(3000, () => {
    console.log("Server Started!");
})

// const server = http.createServer(app);
// server.listen(3000, () => {
//     console.log("Server Started!")
// })


