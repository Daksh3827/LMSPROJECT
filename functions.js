// ---------- Q1 -----------
// let num = Number(prompt("Enter Number: "));
// let fibonacci = (num) => {
//     let a = 0, b = 1, nextTerm;
//     console.log(a);
//     console.log(b);
//     for (let i = 1; i <= num; i++) {
//         console.log(nextTerm);
//         nextTerm = a + b;
//         a = b;
//         b = nextTerm;
//     }
// }
// fibonacci(num);


// ---------- Q2 ----------
// let SumOfDigits = (num) => {
//     let sum = 0;
//     while (num > 0) {
//         let digit = num % 10;
//         sum += digit;
//         num = Math.floor(num / 10);
//     }
//     console.log(`Sum of all digits is = ${sum}`);
// }
// let num = Number(prompt("Enter number: "));
// SumOfDigits(num);


// ---------- Q3 ----------
// let palindrome = (num) => {
//     let reverse = null;
//     let temp = num;
//     while (num > 0) {
//         let digit = num % 10;
//         reverse = reverse * 10 + digit;
//         num = Math.floor(num / 10);
//     }
//     console.log(reverse);
//     if (reverse == temp) {
//         console.log("Number is palindrome...");
//     }
//     else {
//         console.log("Number is not palindrome...");
//     }
// }
// let num = Number(prompt("Enter number: "));
// palindrome(num);


// ---------- Q4 ----------
// let factorial = (num) => {
//     let mul = 1;
//     for (let i = 1; i <= num; i++) {
//         mul *= i;
//     }
//     console.log(`Factorial of ${num} is = ${mul}`);
// }
// let num = Number(prompt("Enter Number: "));
// factorial(num);


// ---------- Q5 ----------
// let Reverse = (num) => {
//     let reverse = null;
//     let temp = num;
//     while (num > 0) {
//         let digit = num % 10;
//         reverse = reverse * 10 + digit;
//         num = Math.floor(num / 10);
//     }
//     console.log(reverse);
// }
// let num = Number(prompt("Enter Number: "));
// Reverse(num);