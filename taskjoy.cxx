/*
Name:Joyce Mbuli Kambua
Reg no:CT100/G/30722/26
Description:Finding bill uding c varible
Date:1/10/2026
*/
#include <stdio.h>

//Function prototype
float calculateBill(float units);

int main(){
    float unitsConsumed, totalBill;
    printf("Enter the units-consumed:");
    scanf("%f", &unitsConsumed);

    //Function call
    totalBill = calculateBill(unitsConsumed);

    printf("\n");
    printf("KENYA POWER PROGRAM \n");
    printf("#################### \n");
    printf("units-consumed %.2f \n", unitsConsumed);
    printf("totalBill %.2f\n", totalBill);

    return 0;
}

//Function definition
float calculateBill(float units){
    float bill;
    if (units <= 100){
        bill = 10.0 * units;
    }
    else if(units >= 101 && units <= 199){
        bill = (100 * 10.0) + (units - 100) * 15.0;
    }
    else if(units >= 200){
        bill = (100 * 10.0) + (100 * 15.0) + (units - 200) * 20.0;
    }
    return bill;
}

	
