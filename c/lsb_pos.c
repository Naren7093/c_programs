#include<stdio.h>
int main(){
	int lsb,n,temp,pos=0;
	printf("Enter a number:");
	scanf("%d",&n);

	lsb=n&-n;
	temp=n;
	while((temp&1)==0){
			temp>>=1;
			pos++;
		}
	
	printf("Least significant bit value is:%d\n",lsb);
	printf("Position of lsb is :%d\n",pos);
	return 0;
}
