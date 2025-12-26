#include<stdio.h>
int main(){
	int n,pos;
	printf("Enter a number:");
	scanf("%d",&n);

	printf("Enter position:");
	scanf("%d",&pos);

	if(n&(1<<pos)){
		printf(" position %d  is set(1)\n ",pos);
	}
	else{
		printf(" position %d is not set(0)\n",pos);
	}
	return 0;
}
