var prompt = require("prompt-sync")();

let num = Number(prompt("Enter The Number: "));
let sum = 0;
let count = 0;
let n = num;

while (num > 0) {
    let value = num % 10; 
    count++;                
    sum += Math.pow(value, count);  
    num = Math.floor(num / 10);  
}

if (sum === n) {
    console.log(n + " is a Disarium number.");
} else {
    console.log(n + " is not a Disarium number.");
}











// var prompt = require("prompt-sync")();

// let num = Number(prompt("Enter The Number :"));
// let sum=0;
// let count=0;
// while (num>0) {
//     while (num>0.9) {
//         value=num%10 |0
//         count++;
//         num=Math.floor(num/10);
//         sum+=Math.pow(value,count);
//     }
//     break;
// }

//     console.log(sum);

// while (num>0) {
//     sum+=num%10 |0
//     num=num/10
// }



