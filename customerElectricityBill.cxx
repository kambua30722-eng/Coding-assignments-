# include <stdio.h>
float calculateBill (int unitsConsumed,float costPerUnit);

int main(){
	float costPerUnit,totalBill;
	int unitsConsumed;
	
	printf("Enter no. of unitsConsumed: ");
	scanf("%d",&unitsConsumed);
	
	printf("Enter cost per unit:");
	scanf("%f",&costPerUnit);
	
	totalBill=calculateBill(unitsConsumed,costPerUnit);
	
	printf("The totalBill in ksh.%.2f",totalBill);
	
	
	return totalBill;
}

float calculateBill(int unitsConsumed,float costPerUnit){
	
	float totalBill;

return unitsConsumed*costPerUnit;

}
	
