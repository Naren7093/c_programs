#include<stdio.h>

int main(){
	float n1,n2;
	float *ptr1,*ptr2;
	ptr1=&n1;
	ptr2=&n2;
	float sum,diff,mul,div;
        printf("Enter two numbers:");
        scanf("%f %f",ptr1,ptr2);

	sum=(*ptr1)+(*ptr2);
        diff=(*ptr1)-(*ptr2);
        mul=(*ptr1)*(*ptr2);
        div=(*ptr1)/(*ptr2);
	printf("Sum is:%f\n",sum);
	printf("Difference is:%f\n",diff);
	printf("Multipilication is:%f\n",mul);
	printf("Division is:%f\n",div);
	return 0;
}
