// When we use this keyword in funnction and when we call function using New keyword then It is called Constructor function
// When we need more element in a same properity then we make constructor function
// New keyword make a blank object and return person 1 variable
function employ(name) {
  this.name = name;
  this.salary = 2000000;
  this.color = "white";
}

let emp1 = new employ("Arslan");
let emp2 = new employ("Umer");
let emp3 = new employ("Hanzla");
console.log(emp1);
console.log(emp2);
console.log(emp3);

console.log(emp1.name);
console.log(emp2.name);
console.log(emp3.name);
