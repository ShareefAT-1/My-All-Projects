// function sum(a, b) {
//   console.log(a + b);
// }
// const sum = function(a,b){
//     console.log(a+b)
// }
var prompt = require("prompt-sync")();

const sum = (num1, num2) => console.log(num1 + num2);

const substract = (num1, num2) => console.log(num1 - num2);

const multiplication = (num1, num2) => console.log(num1 * num2);
const modules = (num1, num2) => console.log(num1 % num2);
const devide = (num1, num2) => console.log(num1 / num2);

let num1 = Number(prompt("Enter the first number:"));
let operator = prompt("Enter the operator:");
let num2 = Number(prompt("Enter the second number:"));

switch (operator) {
  case "+":
    sum(num1, num2);
    break;
  case "-":
    substract(num1, num2);
    break;
  case "*":
    multiplication(num1, num2);
    break;
  case "%":
    modules(num1, num2);
    break;
  case "/":
    devide(num1, num2);
    break;

  default:
    console.log("Invalid operator.");
    break;
}
