#include<stdio.h>
int main(){
	int oct,dec=0,rem,base=1;
	printf("Enter octal umber:");
	scanf("%d",&oct);

	while(oct!=0){
		rem=oct%10;
		dec+=rem*base;
		oct/=10;
		base*=8;
	}
	printf("Decimal number:%d\n",dec);
	return 0;
}

