const { log } = require('node:console');
const fs = require('node:fs');

// fs.writeFile("first.txt" , "I any write anything in this file" , function(err){
//     if (err) {
//         console.error(err);
//     }
//     else{
//         console.log("Done");
//     }
// })


// fs.appendFile("first.txt" , "\n   if you can write you can append anyh thing" , function(err){
//     if (err) {
//         console.error(err);
//     }
//     else{
//         console.log("Done");
//     }
// })

fs.rename("first.txt"  , "reName.txt"  , function(err){
if (err) {
    console.log(err);
}
else{
    console.log("Done Rename");
}
})