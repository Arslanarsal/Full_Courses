// Synchronous and Asynchronous 
// JS is not ASYNS
// SYNS execuite in main stack line by line ans ASYNS start all execution togather and ASYNS execution work in side stack and when main stack is empty then event loop ask to side stack Is execuition is completed then show in main stack


//Async is multi-thread, which means operations or programs can run in parallel. Sync is a single-thread, so only one operation or program will run at a time. Async is non-blocking, which means it will send multiple requests to a server

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
