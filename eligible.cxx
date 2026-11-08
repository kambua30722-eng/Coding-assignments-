# include <stdio.h>

int main(){
	
	int marks;
	int attendance;
	
	printf("Enter marks \n");
	scanf("%d", &marks);
	
	printf("Enter attendance \n");
	scanf("%d", &attendance);
	
	if (attendance >=75 &marks >=40){
		printf("eligible \n");
	}
	else {
		printf("not eligible \n");
	}
	return 0;
}
	
	