
let x = undefined;
let y = x &&= 11;

console.log(y); // undefined
console.log(x); // undefined

console.log(x + y); // NaN
