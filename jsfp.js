// ----------Q1----------
// var temp = Number(prompt("Enter Temperature: "));
// if (temp > 30) {
//     alert("Hay Garmi!!!")
// }
// else {
//     alert("Mausam Sahi Hai");
// }



// ----------Q2----------
// var ogname = "DAKSH";
// var ogpwd = "3827";

// var name = prompt("Enter UserName: ");
// var pwd = prompt("Enter Password: ");
// if (name === ogname && pwd === ogpwd) {
//     alert("AApka Swagat Hai");
// }
// else {
//     alert("Chala Ja  BSDK");
// }


// ----------Q3----------
// var TotalMarks = Number(prompt("Enter your Total Marks: "));
// if (TotalMarks >= 90) {
//     alert("A+ Grade");
// }
// else if (TotalMarks >= 80) {
//     alert("A Grade");
// }
// else if (TotalMarks >= 70) {
//     alert("B Grade");
// }
// else if (TotalMarks >= 60) {
//     alert("C Grade");
// }
// else if (TotalMarks >= 50) {
//     alert("D Grade");
// }
// else {
//     alert("Nikal Lawde");
// }



// ----------Q4----------
// var num1 = Number(prompt("Enter First Number: "));
// var num2 = Number(prompt("Enter Second Number: "));
// if (num1 > num2){
//     alert(`${num1} is Greater`);
// }
// else if (num2 > num1){
//     alert(`${num2} is greater`);
// }
// else{
//     alert("Goli Beta Masti nahi");
// }


// ----------Q5----------
// var day = Number(prompt("Enter Day Number: "));
// switch (day) {
//     case 1:
//         alert("Monday");
//         break;

//     case 2:
//         alert("Tuesday");
//         break;

//     case 3:
//         alert("Wednesday");
//         break;

//     case 4:
//         alert("Thursday");
//         break;

//     case 5:
//         alert("Friday");
//         break;

//     case 6:
//         alert("Saturday");
//         break;

//     case 7:
//         alert("Sunday");
//         break;

//     default:
//         alert("Hafta Khatam hai, Dobara Try Kar");
//         break;
// }

// ----------Q6----------
// var TotalBalance = 49;
// var WithdrawAmount = Number(prompt("Enter Withdraw Amount: "));
// if (WithdrawAmount > TotalBalance) {
//     alert("Aukat Me Reh");
// }
// else {
//     TotalBalance = TotalBalance - WithdrawAmount;
//     alert(`Withdrawal Successfull, Remaining Balance = ${TotalBalance}`);
// }


// ----------Q7----------
// var BillAmount = Number(prompt("Enter Total Bill Amount: "));
// console.log(BillAmount);
// var Discount = null;
// if (BillAmount >= 3500) {
//     Discount = (15 / 100) * BillAmount;
//     BillAmount -= Discount;
//     console.log(`You got 15% discount, Final Amount is ${BillAmount}`);
// }
// else if (BillAmount >= 2500 && BillAmount < 3500) {
//     Discount = (10 / 100) * BillAmount;
//     BillAmount -= Discount;
//     console.log(`You got 10% discount, Final Amount is ${BillAmount}`);
// }
// else if (BillAmount >= 1000 && BillAmount < 2500) {
//     Discount = (5 / 100) * BillAmount;
//     BillAmount -= Discount;
//     console.log(`You got 15% discount, Final Amount is ${BillAmount}`);
// }
// else {
//     alert(`Sorry!!! No Discount Avalaible`);
// }   



// ----------Q8----------
// var ElecVoltageUsage = Number(prompt("Enter your electricity bill Amount: "));
// ElecVoltageUsage *= 2.4;
// alert(`According to Rs.2.4 per Unit, Your Electricity Bill is ${ElecVoltageUsage}`);


// ----------Q9----------
// var distance = Number(prompt("Enter Distance in Kms: "));
// var fare = null;
// if (distance <= 5) {
//     fare = distance * 10;
// }
// else if (distance <= 15) {
//     fare = (5 * 10) + ((distance - 5) * 6);
// }
// else {
//     fare = (5 * 10) + (10 * 6);
// }
// alert(`Your Total fare for ${distance}km is Rs.${fare}`);

// ----------Q10----------
// var choice = Number(prompt("Enter 1 for Pizza \nEnter 2 for Burger \nEnter 3 for Sandwich \nEnter 4 for Pasta"));
// switch (choice) {
//     case 1:
//         alert("Pizza Price is Rs.250");
//         break;

//     case 2:
//         alert("Burger Price is Rs.160");
//         break;

//     case 3:
//         alert("Sandwhich Price is Rs.100");
//         break;

//     case 4:
//         alert("Pasta Price is Rs.180");
//         break;

//     default:
//         alert("Invalid Choice");
//         break;
// }
