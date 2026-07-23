user = {name: "Alice", age:25};

console.log(user);

user.age = 26;
user.role = "Admin";

console.log(user);

// Bad programming practice
user = {name: "Bob"};   // Issue

console.log(user);

// Bad programming practice
user = "Hello";         // Issue

console.log(user);