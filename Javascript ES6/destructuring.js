
//  Destructuring in JavaScript

// Destructuring is a feature in JavaScript that allows you to extract values from arrays or properties from objects into distinct variables. This provides a convenient way to work with arrays and objects.

//  Destructuring Arrays

var a = [1, 2, 3, 4, 5];
var [b, c] = a;   // Outputs: 1 2
var [b, , c] = a;   // Outputs: 1 3
console.log(b, c);

// - We're extracting the values from array `a` into variables `b` and `c`.
// - `b` gets the first value (1), and `c` gets the second value (2).



// #### Destructuring Objects
javascript
var obj = {
    name: "Arslan",
    age: 23,
    coder: "Dangerous"
};

var { age, coder } = obj;
console.log(age);   // Outputs: 23
console.log(coder); // Outputs: Dangerous


// - We're extracting the properties `age` and `coder` from the `obj` object into variables with the same names.

// #### Error in Destructuring
var { agse } = obj;
console.log(agse); // Outputs: undefined
// - `agse` is not a key in the `obj` object, so it returns `undefined`.



// ### Additional Points
// - Destructuring can be useful when dealing with function parameters, making code more readable and maintainable.
// - It's possible to use default values while destructuring in case the value is undefined.
// - Destructuring can also be used with nested objects and arrays for more complex data structures.