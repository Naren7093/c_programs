#include<stdio.h>
int main(){
	int num,pos=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	if(num==0){
		printf("Not defined for 0:\n");
		return 0;
	}
	int temp=num;
	while((temp&1)==0){
		temp >>= 1;
		pos++;
	}
        int lsb=(1<<pos);
//	int lsb=(num&-num);
	printf("Lsb is at position :%d\n",pos);
	printf(" lsb value:%d\n",lsb);
	return 0;
}

