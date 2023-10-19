//Basically three type of Arrow function


// fat'()'   Arrow '=>'  fnc '{}';  -->Combine ()=>{}

// 1) ------------->>>>>>>>>>>>>>>>>>>>> Basic Arrow Function:

// Arrow functions without parameters or with a single parameter can be defined using the () => { } syntax.

() => { };                 // Simple Arrow fnc
() => {
    console.log("This is a simple arrow function.");
};

var arrowFunction = () => {
    console.log("Arrow function stored in a variable.");
};

arrowFunction();



// 2) ------------------->>>>>>>>>>>>>>>>>>>>> Basic fat Arrow fnc with Parameter

// Arrow functions with parameters are defined using param => { } syntax for a single parameter or (param1, param2) => { } for multiple parameters.

para => { };               //  Arrow fnc with Parameter not neccessary fat
para => {
    console.log("Arrow function with a parameter: " + para);
};

(para1, para2) => {
    console.log("Arrow function with two parameters: " + para1 + ", " + para2);
};

var functionWithParam = param => {
    console.log("Arrow function with a parameter stored in a variable: " + param);
};

functionWithParam("test");


//  3)----------------------------->>>>>>>>>>>>>>>>>>>>>>>Arrow Function with Implicit Return:

// If an arrow function has a single expression and you want to implicitly return its result, you can omit the curly braces and the return keyword


var implicitReturn = () => 12;

console.log(implicitReturn());  // Outputs: 12

