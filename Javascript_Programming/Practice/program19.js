
let x = null;
let y = x &&= 11;

console.log(y); // null
console.log(x); // null

console.log(x + y); // 0
