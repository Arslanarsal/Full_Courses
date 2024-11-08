<<<<<<< HEAD
const { log } = require('node:console');
const fs = require('node:fs');
const http = require('http')

fs.writeFile("first.txt" , "I any write anything in this file" , function(err){
    if (err) {
        console.error(err);
    }
    else{
        console.log("Done");
    }
})
=======
const { log } = require("node:console");
const fs = require("node:fs");
const http = require("http");
>>>>>>> 40ffb59c2c823560ef8db2937c3e5d29ec72bd2e

fs.writeFile("first.txt", "I any write anything in this file", function (err) {
  if (err) {
    console.error(err);
  } else {
    console.log("Done");
  }
});

fs.appendFile("first.txt" , "\n   if you can write you can append anyh thing" , function(err){
    if (err) {
        console.error(err);
    }
    else{
        console.log("Done");
    }
})

fs.rename("first.txt"  , "reName.txt"  , function(err){
if (err) {
    console.log(err);
}
else{
    console.log("Done Rename");
}
})

fs.copyFile("reName.txt", "./Copyfile.txt", function (err) {
    if (err) {
        console.log(err);
    } else {
        console.log("Done");
    }
})

<<<<<<< HEAD

fs.unlink("Copyfile.txt", function(err){
    if (err) {
        console.log(err.message);
    }else{
        console.log("Done");
    }
})


fs.readFile("reName.txt",'utf8', function (err, data) {
    if (err) {
        console.log(err);
=======
// fs.unlink("Copyfile.txt", function(err){
//     if (err) {
//         console.log(err.message);
//     }else{
//         console.log("Done");
//     }
// })

// fs.readFile("reName.txt",'utf8', function (err, data) {
//     if (err) {
//         console.log(err);
>>>>>>> 40ffb59c2c823560ef8db2937c3e5d29ec72bd2e

    } else {
        console.log(data);
    }
})

const server = http.createServer(function (req, res) {
    res.end("Hello world");
})

// server.listen(3000);

<<<<<<< HEAD

// console.log("Hey! Hello ");
=======
console.log("Hey! Hello ");
>>>>>>> 40ffb59c2c823560ef8db2937c3e5d29ec72bd2e
