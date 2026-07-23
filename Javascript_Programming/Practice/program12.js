
let x = 10;
let y = 5;
let z ;

console.log(`Before increment : ${x}`);// 10

z = x++;    // z = x = x + 1;   Post increment

console.log(`z: ${z}`);// 10
console.log(`x: ${x}`);// 11

z = ++x;    // z = x = x + 1;   Pre increment 

console.log(`z : ${z}`);// 12
console.log(`x : ${x}`);// 12

console.log(`Before decrement : ${y}`);// 5

z = y++;    // z = y = y - 1;   Post decrement

console.log(`z: ${z}`);// 5
console.log(`y: ${y}`);// 6

z = ++y;    // z = y = y - 1;   Pre decrement 

console.log(`z : ${z}`);// 7
console.log(`y : ${y}`);// 7

