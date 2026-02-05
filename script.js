// ---------- Q1 ----------
// let students = [
//     { name: "Daksh", marks: 99 },
//     { name: "Jash", marks: 74 },
//     { name: "Aryan", marks: 999 },
//     { name: "Jitendra", marks: 11 }
// ]

// students.map(function (student) {
//     console.log(`${student.name}: ${student.marks}`);
// });

// console.log(`\n`);

// students.filter(function (student) {
//     if (student.marks > 50) {
//         console.log(`${student.name}: ${student.marks}`);
//     }
// });

// let totalmarks = students.reduce((total, student) => {
//     return total + student.marks;
// }, 0);

// console.log(`total is: ${totalmarks}`);



// ---------- Q2 ----------
// let products = [
//     { name: "Wafers", price: 20, quantity: 20 },
//     { name: "Chocolate", price: 50, quantity: 20 },
//     { name: "Cake", price: 510, quantity: 10 },
//     { name: "Sweets", price: 18, quantity: 30 }
// ]

// products.map((Pro) => {
//     console.log(`${Pro.name}`);
// })

// console.log("\n");

// products.filter((Pro) => {
//     if (Pro.price > 500) {
//         console.log(`Products with price above Rs.500 is: ${Pro.name}`);
//     }
// })

// console.log("\n");

// let totalprice = products.reduce((total, Pro) => {
//     return total += Pro.price;
// }, 0);

// console.log(`Total proce of all products is: Rs.${totalprice}`);

// console.log("\n");
// console.log(`updated Product Quantity: `);

// products[0].quantity += 30;
// products.map((Pro) => {
//     console.log(`${Pro.quantity}`);
// });



// ----------Q3 ----------
// let employees = {
//     names: ["Daksh", "Jash"],
//     skills: ["web Developer", "Web Designer"]
// };

// console.log(`Before Adding age using Spread Operator:`);
// console.log(employees);
// console.log(`\nAfter Adding age using Spread Operator: \n`);

// let updatedEmployees = {
//     ...employees,
//     age: [20, 20]
// };

// console.log(updatedEmployees);


// ---------- Q4----------
// let numbers = [5, 7, 6, 2, 4, 1, 8, 9, 3, 8];

// let oddsum = numbers.reduce((total, num) => {
//     if (num % 2 === 0) {
//         total += num;
//     }
//     return total;
// }, 0);

// let evensum = numbers.reduce((total, num) => {
//     if (num % 2 !== 0) {
//         total += num;
//     }
//     return total;
// }, 0);

// console.log(`Sum of all Odd Numbers is: ${oddsum}`);
// console.log(`Sum of all Even Numbers is: ${evensum}`);



// ---------- Q5 ----------
// let Students = [
//     { name: "Daksh", marks: 91 },
//     { name: "Jash", marks: 76 },
//     { name: "Aryan", marks: 79 },
//     { name: "Jitendra", marks: 12 }
// ];

// let result = Students.map((stu) => {
//     if (stu.marks > 35) {
//         stu.result = "Pass";
//     }
//     else {
//         stu.result = "Fail";
//     }
// });

// console.log("Passed Students Names are: ");
// Students.filter((stu) => {
//     if (stu.result === "Pass") {
//         console.log(stu.name);
//     }
// });

// let average = Students.reduce((total, stu) => {
//     total += stu.marks;
//     return total;
// }, 0);

// console.log(`\nAverage Marks of Students is: ${average / Students.length}`);