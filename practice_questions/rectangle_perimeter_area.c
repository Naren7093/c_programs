#include<stdio.h>

int main()
{
        float length,breadth, area,perimeter;
         printf("Enter length of rectangle:");
        scanf("%f",&length);
       printf("Enter breadth of rectangle:");
       scanf("%f",&breadth);
perimeter= 2*(length + breadth);
printf("perimeter of rectangle :%f\n",perimeter);
area=length * breadth;
printf("Area of rectangle: %f\n",area);
return 0;
}
                 
