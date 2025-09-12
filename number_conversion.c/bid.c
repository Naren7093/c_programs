#include<stdio.h>
int main(){
	long long bin,tempbin;
	int dec=0,rem,base=1;
	
	printf("Enter any binary number:");
	scanf("%lld",&bin);

	tempbin=bin;
	while(tempbin!=0){
		rem=tempbin%10;
		dec+=rem*base;
		tempbin/=10;
		base*=2;
	}
	printf("Original binary number:%lld\n",bin);
	printf("Decimal number:%d\n",dec);
	return 0;
}
       
