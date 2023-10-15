// JS is not ASYNS
// SYNS execuite in main stack line by line ans ASYNS start all execution togather and ASYNS execution work in side stack and when main stack is empty then event loop ask to side stack Is execuition is completed then show in main stack

/*
When we use these then we write ASYNS code OtherWise SYNS code
--setTimeout
--setInterval
--Promises
--fetch
--axios
--XMLHttpRequest
*/


/*
When any function execuite in future that called callback function. These function are
in ASYNS code 
When we receve answer from ASYNS code then we start these callback functions
callback
then catch
acync await
*/


console.log("A");
console.log("b");
setTimeout(function () {
  console.log("c");
}, 0);
console.log("d");
