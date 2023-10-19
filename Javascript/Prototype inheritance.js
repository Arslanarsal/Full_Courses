/*
Prototype are properities Like when we creat a string and want to know the size of string then we call function (String.length()) this is prototype of a string
And we can also creat prototype of any object
*/
/*
Prototype inheritance in JavaScript allows objects to inherit properties and methods from other objects by creating a prototype chain. Each object has a prototype from which it inherits properties and methods. If a property or method is not found on the current object, JavaScript looks for it in its prototype and continues up the chain until it's found or the chain ends with a null prototype. This mechanism enables efficient code reuse and promotes a flexible and powerful object-oriented programming model in JavaScript.
*/

//Human common propertys
var human = {
  canfly: false,
  isfeeling: true,
  cantalk: true,
  canwalk: true,
  HaveEmotion: true,
  HaveFourLeg: true,
};

//Uog student common propertys
var UognStudent = {
  canmakeWedsite: true,
  canHack: true,
};

UognStudent.__proto__ = human;

console.log(UognStudent, UognStudent.__proto__);
console.log(UognStudent.canHack); //These properitys are inhertance from human
console.log(UognStudent.isfeeling);
