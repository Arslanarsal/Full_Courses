const cluster = require('cluster');
const express = require('express')

const os = require('os')

console.log(cluster.isPrimary);
const numCPUs = os.cpus().length;
if (cluster.isPrimary) {
    // console.log(`Primary ${process.pid} is running`);
    // Fork workers.
    for (let i = 0; i < numCPUs; i++) {
        cluster.fork();
    }

} else {
    const app = express();
    app.get('/', function (req, res) {
        res.send(`Server runing on  ${process.pid}`)
    })
    app.listen(3000, () => {
        console.log("Server is runing")
    })
}