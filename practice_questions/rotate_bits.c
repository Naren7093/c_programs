#include<stdio.h>

int main()
{
	unsigned int num,rotateleft,rotateright;
	int shift;
	printf("Enter number: ");
	scanf("%u",&num);
	printf("Enter shift:");
	scanf("%d",&shift);

	rotateleft = (num<<shift)|(num>>32-shift);
	rotateright = (num>>shift)|(num<<32-shift);

	printf("rotateleft:%u\n",rotateleft);
	 printf("rotateright:%u\n",rotateright);
return 0;
}

