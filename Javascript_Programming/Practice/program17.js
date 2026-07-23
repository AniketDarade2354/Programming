
let x = 0;
let y = x &&= 11;

console.log(y); // 0
console.log(x); // 0

console.log(x + y); // 0
