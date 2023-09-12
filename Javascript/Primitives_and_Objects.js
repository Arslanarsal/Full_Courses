//  ------>>>>>>>> 7 primitives Data  types in js
// nn bb ss u
// NULL  , Number , Boolean  , Bigint , string , symbol , undefined

let a = null;
let b = 123;
let c = true;
let d = BigInt("150") + BigInt("3");
let e = "Arslan";
let f = Symbol("This is a symbol");
let g = undefined;
// console.log(a, b, c, d, e, f, g);
// console.log(typeof d);

//  ------>>>>>>>> Non primitive Data type in js
// Object------------------key and value pairs

const item = {
  arslan: 12,
  Umer: true,
  hanzla: false,
  12: 754,
};

item["friend"] = "ali"

item["num"] = 123
item["12"] = 123

console.log(item["12"]);
console.log(item.Umer);
console.log(item);
