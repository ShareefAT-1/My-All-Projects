var prompt = require("prompt-sync")();

let a = 4;
let b = "7";

let num1 = Number(prompt("Enter The Number :"));
let operator = prompt("Enter The Operator :");
let num2 = Number(prompt("Enter the 2nd Number :"));
if (operator == "+") {

  console.log(num1 + num2);

} else if (operator == "-") {

  console.log(num1 - num2);

} else if (operator == "*") {

  console.log(num1 * num2);

} else if (operator == "/") {

  console.log(num1 / num2);

} else if (operator == "%") {

  console.log(num1 % num2);
}
