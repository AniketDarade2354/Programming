
let x = false;
let y = x &&= 11;

console.log(y); // false
console.log(x); // false

console.log(x + y); // 0
