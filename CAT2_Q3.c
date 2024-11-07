/* AUTHOR: STANELY KARIUKI MUGO
REGNO: CT101/G/22066/24
DATE: 06/11/2024
TITLE: EMPLOYEE
*/
#include <stdio.h>
int main () {
float hoursWorked,hourlyWage,grossPay,taxes,netPay,overtimeHours;
const float overtimeRate= 1.5;
const float taxRate1=0.15; //for first $600
const float taxRate2=0.20; //for the rest
const float taxThreshold = 600.0;
const float regularHours = 40.0; //normal working hours
//user input request
printf("Enter hours worked in a week: \a");
scanf("%f", &hoursWorked);
printf("Enter HourlyWage: \a");
scanf("%f", &hourlyWage);
//to calculate gross pay
if(hoursWorked > regularHours){
//proceed to calculate overtime hours
overtimeHours=hoursWorked-regularHours;
//hence calculate gross pay
grossPay=((regularHours*hourlyWage)+ (overtimeHours*hourlyWage*overtimeRate));
}
//then calculate taxes
if (grossPay>taxThreshold) {
//where gross pay is $600 apply taxRate (15%)
taxes=grossPay*taxRate1;
} else {
//grosspaypay is over $600 and so apply both taxrale 1(15%) on first 5000 and Tax
taxes=(taxThreshold*taxRate1)+((grossPay-taxThreshold)*taxRate2);
//finally calculate the net pay
netPay=grossPay-taxes;
//preprocessor directive
printf("GrossPay: $%.2f\n",grossPay);
printf("Taxes: $%.2f\n",taxes); //alltaxes deducted
printf("NetPay: $%.2f\n\a", netPay);
}
return 0; //to end prograam execution
}