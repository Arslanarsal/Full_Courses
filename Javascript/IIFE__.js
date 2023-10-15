// Immediately Invoked Function Expressions (IIFEs)
let a = () => {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve(456);
    }, 2000);
  });
};

(async () => {
  let b = await a();
  console.log(b);

  let c = await a();
  console.log(c);

  let d = await a();
  console.log(d);
})();

// In IIFEs variables are private we can't access outside the function
(function () {
  var a = "Hello World";
  console.log(a);
})();
// console.log(a); //  This is wrong because variables are private we can't access outside the function

// In IIFEs return Object and set and get value like a class
let b = (function () {
  var a = 12;
  return {
    getter: function () {
      return a;
    },
    setter: function (val) {
      a = val;
    },
  };
})();

b.setter(88);
console.log(b.getter());
