#include<stdio.h>

int main()
{
	float radius,area,circumference,diameter;
	 
	printf("Enter radius of circle:");
	scanf("%f",&radius);

	diameter = 2 * radius;
	circumference = 2 * 3.14 * radius;
	area = 3.14 * radius* radius;

	printf("Diameter of circle:%f\n",diameter);
	printf("circumference of circle:%f\n",circumference);
	printf("area of circle:%f",area);

	return 0;
}

