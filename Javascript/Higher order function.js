// Higher order function is a function which acept function as a parameter or return a function

// Array.forEach(Function) //for each is a higher order function because it acccept function as a parameter


//function which acept function as a parameter
function abcd(fun) {
  console.log(fun());
}
//return a function
let a = function abcd() {
  return function () {
    console.log("Calling");
  };
};


abcd(function () {
  console.log("Calling");
});
