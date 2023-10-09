// ---------->>>>>>>>>>>>>In Array we store different types of values and array is a object
// let arr = [3, 4, 5, 1, 2, 7];
// console.log(arr[0]); //---------Print 0 index element
// console.log(arr); //---------print full array

//------------>>>>>>>                 Array Methods
//---------------------------------------Join
// let c1 = arr.join("_  "); //----This will add anything after every element But not changing in original array
// console.log(arr);
// console.log(c1);
let num = [1, 2, 3, 34, 4];
// let b = num.toString(); //------>> This will convert array into String
// console.log(b, typeof b) //------>> This will show type of array

//---------------->>>>>>>>>>>>>>>  Add element from array
// let r = num.push(56) // push returns the new array length and also add element in last
// console.log(num, r)
let r = num.unshift(78)//unshift returns the new array length and add element in front
console.log(num, r)

//---------------->>>>>>>>>>>>>>>  remove element from array
// let r = num.shift()// Removes an element from the start of the array and return it
// console.log(r, num)

// let r = num.pop() // pop returns the last element and also remove into array
// console.log(num, r)

// delete num[0] //  Delete remove the element but not delete the memory

// let d = [1, 2, 3, 454, 76776, 7];
// let d1 = [4, 3, 9, 5, 6, 7, 8];

// d = d.concat(d1); //-------------->>>>>>>>>> merge two array
// d.sort(); //---------Sorting according to string every charter first element like ------------------------here 9 go to end
// console.log(d);
//splice(start , how many element , elements)
// d.splice(2,3, 100,100,100)//In splice first he will get index where he start  -------------------------------second index how many element remove
//----------------------------- third get array (add array in removeing element)
// console.log(d);

// console.log(d.slice(3)) // ---This will return element from index 3 to end
// console.log(d.slice(1 , 3)) // --This will return element from index 1 to 3-1






