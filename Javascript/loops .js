//-------------->>>>>>>>>>>>>>>>>>>> |||||||||| All Loops
let d = [1, 2, 3, 454, 76776, 7];
let d1 = [4, 3, 9, 5, 6, 7, 8];
let arr = [3, 4, 5, 1, 2, 7];
for(let i =0 ; i <arr.length ; i++){ //-----  Loop print all element
    console.log(arr[i])
}

d.forEach(ele => {  //  -----  ele get element one by one from array
    console.log(ele)  //for each use for operation in exiting element
});

for(let i of d){  //   -----  Of loop return pair ,, Here return index
console.log(i)
}

for(let i in d){ //   ------   in loop return kay ,, Here return index value
console.log(i)
}

// ------------------->>>>>>>>>>  |||||||     Map , filter , reduce
//Foreach and map both ---------- get (value , index , array)
//This wil not change original array

let arr1 = [12, 3, 3, 22, 3];
//When we want to make new array we use map map return the element
let a = arr1.map((value)=>{   // get  (value )
    console.log(value)
    return value
})
console.log(a)
//--------------------------
// let a = arr1.map((value , index)=>{   // get  (value , index )
//     console.log(value ,  index)
//     return value
// })
// console.log(a)
//---------------------------
// let a = arr1.map((value , index  , array)=>{ // get  (value , index , array )
//     console.log(value ,  index , array)
//     return value
// })
// console.log(a)

// let as  = arr1.forEach((ele)=>{ //for each use for operation in exiting element
//     // console.log(ele)
//     // return as; //This is wrong foreach loop we can't return value
// })
// console.log(as)

//------------>>>>>>>>>>> |||||||||||||||      Filter
// let a = arr1.filter((value)=>{  // get  (value , index , array )
//     return value > 2 //Filter is like condition statement if it is true then return otherwise no
// })
// console.log(a)

//------------>>>>>>>>>>> |||||||||||||||      reduce
// let a = arr1.reduce((value, value2, e) => {
//   //Reduce get two values and sum it if we give one value this will return it
//   // e is number that tell how many time we get value from array
//   console.log(e);
//   return value + value2 + e; //Reduce return sum here get two value and then one by one get value on array and add into answer like sum of array
// });
// console.log(a);

// const reduce_fun = (value , value2)=>{

//     return value + value2
// }
// let a = arr1.reduce(reduce_fun) // Here we can write function sepratly
// console.log(a)

//------------>>>>>>>>>>> |||||||||||||||      .from
// let names = "arslan"
// let a2  = Array.from(names) //HTML charates convert into array like get getelementbyid
// console.log(a2)