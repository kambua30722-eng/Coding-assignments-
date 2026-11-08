/*
Name:Joyce Mbuli Kambua
Reg no:CT100/G/30722/26
Description:Finding grosspay using c varible
Date:1/10/2026
*/
#include <stdio.h>

float calculateTax(float grossSalary);

int main(){
    float grossSalary, result, netSalary;
    printf("Enter the employees gross-salary:\t");
    scanf("%f", &grossSalary);
    result = calculateTax(grossSalary);
    netSalary = grossSalary - result;

    printf("\n");
    printf("EMPLOYEES SALARY PROGRAM \n");
    printf("######################### \n");
    printf("Gross-pay amount: ksh.%.2f \n", grossSalary);
    printf("Result: ksh.%.2f \n", result);
    printf("Net-pay:ksh. %.2f\n", netSalary);
    printf("######################### \n");
    return 0;
}

float calculateTax (float grossPay) {
    float tax;
    if (grossPay < 30000){
        tax = 0.05 * grossPay;
    }
    else if (grossPay >= 30000 && grossPay <= 59999){
        tax = 0.1 * grossPay;
    }
    else if (grossPay >= 60000){
        tax = 0.15 * grossPay;
    }
    return tax;
}

	
