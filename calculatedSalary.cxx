#include <stdio.h>
float calculatedSalary (float  hoursWorked, int hourlyWage);


float calculateSalary(float  hoursWorked ,int hourlyWage){
float weeklySalary;



return hoursWorked-hourlyWage;
}

 int main(){
 	
 	float hoursWorked,weeklySalary;
 	int hourlyWage;
 	

printf("Enter hoursWorked: ");
scanf("%f",&hoursWorked);

printf("Enter hourlyWage: ");
scanf("%d",&hourlyWage);

weeklySalary=calculateSalary(hoursWorked, hourlyWage);

printf("The weeklySalary in ksh.%.2f",weeklySalary);

 return weeklySalary;
 }

