/*
Name:Joyce Mbuli Kambua
Reg No:CT100/G/30722/26
Description:Finding Volume and surface_area
Date:23
*/

#include <stdio.h>


int main()
{//declare  variables
float radius;
float height;
float volume;
float surface_area;
double pi;

printf("Enter your radius:");
scanf("%f", &radius);

printf("Enter your height:");
scanf("%f",&height);

printf("Enter your volume:");
scanf("%f",&volume);

printf("Enter your surface_area");
scanf("%f",&surface_area);

printf("The radius is%.2f\n",radius);
printf("The height is %.2f\n",height);
printf("The volume is %.2f\n",volume);
printf("The surface_area is%f\n",surface_area);
printf("The value of pi is %.3lf\n",pi);


return 0;		
}