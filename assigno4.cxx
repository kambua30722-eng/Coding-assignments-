#include <stdio.h>

//Function prototype
float calculateTax(float grossSalary);

int main(){
	float grossSalary,result,netSalary;
	printf("Enter the employees grossSalary:\t");
	scanf("%f", &grossSalary);
	//Function call
	result=calculateTax(grossSalary);
	netSalary=grossSalary-result;
	
	printf("\n");
	printf("EMPLOYEES SALARY PROGRAM \n");
	printf("####################### \n");
	printf("Gross-pay amount: ksh.%.2f \n", grossSalary);
	printf("Result: ksh.%f.2 \n" ,result);
	printf("Net-pay:ksh. %f .2\n",netSalary);
	printf("###################### \n");
	
	return 0;
}

//Function definition
float calculateTax (float grossPay) {
	float tax;
	if (grossPay <30000){
		tax=0.05*tax;
	}
	else if (grossPay >=30000 &&grossPay <=59999){
		tax=0.1*tax;
	}
	else if (grossPay >=60000){
		tax=0.15*tax;
	}
		return tax;
	}
	
