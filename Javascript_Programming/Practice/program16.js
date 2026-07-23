
let x = 1;
let y = x &&= 11;

console.log(y); // 11
console.log(x); // 11

console.log(x + y); // 22
