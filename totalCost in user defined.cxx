# include <stdio.h>
float calculateTotal (float price,int quantity);

int main (){
	float cost,totalCost;
	int quantity;

	
	printf("Enter the price: ");
	scanf("%f",&cost);
	
	printf("Enter quantity purchased:");
	scanf("%d",&quantity);
	totalCost=calculateTotal(cost, quantity);
	
	printf("The totalCost in ksh.%.2f",totalCost);
	
	return 0;
	
}
float calculateTotal(float price,int quantity){
float totalCost;

totalCost=price *quantity;

return totalCost;

}

