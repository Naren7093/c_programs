#include<stdio.h>

float area(float r)
{
	return 3.14*r*r;
}
float diameter(float r)
{
	return 2*r;
}
float circumference(float r)
{
	return 2*3.14*r;
}
float main()
{
	float r;
	printf("Enter radius:\n");
	scanf("%f",&r);

	float a=area(r);
        float  d=diameter(r);
	float c=circumference(r); 

	printf("Area of circle:%f\n",a);
	printf("Diameter of circle:%f\n",d);
	printf("Circumference of circle:%f\n",c);
}

