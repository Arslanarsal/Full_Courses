// Spread Operator:
// The spread operator (...) is used to expand an iterable (like an array, string, or object) into its individual elements. When used with an array, it can be used to make a copy of the original array or concatenate multiple arrays.
var a = [1, 2, 3, 4, 5, 6];
var b = a;  // This is a reference to the original array 'a'
var c = [...a];  // This creates a copy of the array 'a' in 'c'

console.log(b === a);  // Outputs: true (b is a reference to a)
console.log(c === a);  // Outputs: false (c is a copy of a)


// Rest Parameter:
// The rest parameter allows a function to accept an indefinite number of arguments as an array. It is denoted by ... followed by the parameter name and collects all remaining arguments into an array.

var a = (a, b, c, d, ...e) => {
    console.log(a, b, c, d);  // Prints the first four parameters
    console.log(e);  // Prints an array containing the rest of the parameters
};

a(1, 2, 3, 4, 5, 6, 7, 8, 9);  // Calls the function with multiple arguments
