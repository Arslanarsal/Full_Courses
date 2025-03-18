// Bascally Async function return something but sync function does not return anything He expect a callback function in the end

const fs = require('fs');
const { resourceUsage } = require('process');

// sync....  || -> Blocking Request
// fs.writeFileSync('./test.txt' ,"Hey there , i am Arlsan");

// Async.... || -> Non-Blocking Request
// fs.writeFile('./test.txt',  "hey this is Async" , (err)=>{})

// Sync....... 
// const res = fs.readFileSync('./number.txt', 'utf-8')
// console.log(res);

// Async....
// const res = fs.readFile('./number.txt', 'utf-8', (err, res) => {
// const res = fs.readFile('./number.txt', 'utf-8', (err, res) => {
//     if (err) {
//         console.log("Error", err);
//     } else {
//         console.log(res);
//     }
// })
// console.log(res);

// fs.mkdirSync("./Createtxt");
// fs.mkdirSync("./Createtxt/a.txt" , {recursive:true});


// ---------->>>>>blocking req Sync function
// console.log(1);
// // sync....  || -> Blocking Request
//  const result =  fs.readFileSync('./test.txt' , "utf-8");
//  console.log(result)
// console.log(2);


// ---------->>>>>Non - blocking req ASync function
// console.log(1);
// // sync....  || -> Blocking Request
// fs.readFile('./test.txt', "utf-8", (err, result) => {
//     console.log(result);
// });

// console.log(2);

const os  = require('os')

console.log(os.cpus().length)