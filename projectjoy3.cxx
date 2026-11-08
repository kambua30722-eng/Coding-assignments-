#include <stdio.h>

//Function prototype
float calculateBill(float units);

int main(){
	float unitsConsumed,totalBill;
	printf("Enter the unitsConsumed:");
	scanf("%f",&unitsConsumed);
	
	//Function call
	totalBill=calculateBill(unitsConsumed);
	
	printf("\n");
	printf("KENYA POWER PROGRAM \n");
	printf("################## \n");
	printf("unitsConsumed %.2f \n",unitsConsumed);
	printf("totalBill %.2f\n",totalBill);
	
	return 0;
}

//Function definition
float cslculateBill(float units){
	float bill;
	if (units<=100){
		bill=10.0*units;
	}
	else if(units>=101 &&units <=199){
		bill=(101*10.0)+(units);
	}
	else if(units>=200){
		bill=(101*10.0)+(100*1);

	
	return bill;
}

	
