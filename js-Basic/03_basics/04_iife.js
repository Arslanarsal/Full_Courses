// Immediately Invoked Function Expressions (IIFE)
// Global scope pollution can create problems, which is why we use this function.

// Outer IIFE
(function () {
  let counter = 0;

  const incrementCounter = () => counter++;

  console.log(`Outer Counter: ${counter}`); // Outputs: Outer Counter: 0

  // Inner IIFE
  (function innerScope() {
    console.log(`Inner Scope Counter: ${counter}`); // Outputs: Inner Scope Counter: 0

    incrementCounter();
    console.log(`After Increment, Inner Scope Counter: ${counter}`); // Outputs: After Increment, Inner Scope Counter: 1
  })();
})();

/*
  Explanation:
  - An outer IIFE (Immediately Invoked Function Expression) is defined to encapsulate variables and functions, preventing global scope pollution.
  - The outer IIFE defines a counter variable and an incrementCounter function.
  - The outer IIFE prints the initial value of the counter, which is 0.
  - Inside the outer IIFE, there's an inner IIFE. This inner IIFE is immediately invoked.
  - The inner IIFE logs the current value of the counter within its scope (0) and increments the counter.
  - After the increment, the inner IIFE logs the updated counter value (1).
  
  This demonstrates how an inner function (inner IIFE) has access to the variables of its containing function (outer IIFE) due to closure. It also showcases the use of IIFE to create private scopes and avoid global variable conflicts.
  
  Additional examples (commented out in the code):
  - Named IIFE:
    (function chai(){
      console.log(`DB CONNECTED`);
    })();
  
  - Arrow Function IIFE with an argument:
    ((name) => {
      console.log(`DB CONNECTED TWO ${name}`);
    })('hitesh');
  */

// (function chai(){
//     // named IIFE
//     console.log(`DB CONNECTED`);
// })();

// ( (name) => {
//     console.log(`DB CONNECTED TWO ${name}`);
// } )('hitesh')
