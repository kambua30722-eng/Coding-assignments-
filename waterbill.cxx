/*
Name:Joyce Mbuli Kambua
Reg No:CT100/G/30722/26
Description:working waterbill using c varible
Date:13/10/2026
*/

#include <stdio.h>

float calculatebill(int  units);

int main (){

float bill;
int units;

    printf("Enter water units consumed \n");
    scanf(" %d", &units);
    
    bill=calculatebill(units);
    
    printf("The units consumed is%.2d \n",units);
    printf("The water bill is%.2f  \n ",  bill);
    
    return 0;
}
 
float calculatebill(int units){
    float bill;
if (units<=30){
    bill=units*20;
}
else if (units<=60) {
    bill=units*25;
}
else{
    bill=units*30;
}
return bill;
}                
    