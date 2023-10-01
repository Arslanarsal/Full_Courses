let a = document.getElementById("bulb");

// console.log(a);
// a.innerHTML= "Kasy ho"
// a.style.color = "red";

// a.addEventListener('click' , function(){
//     a.style.backgroundColor = "blue"
// })

let flag = false;
let s = document.getElementById("on-off");
s.addEventListener("click", function () {
  if (!flag) {
    a.style.backgroundColor = "yellow";
    flag = true;
  } else {
    a.style.backgroundColor = "white";
    flag = false;
  }
});
