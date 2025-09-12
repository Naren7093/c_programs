#include<stdio.h>
int main(){
	long long bin,tempbin;
	int oct=0,digit,rem,value,base=1,pos;

	printf("Enter binary number:");
	scanf("%lld",&bin);
	
	tempbin=bin;
	while(tempbin>0){
		digit=tempbin%1000;
		value=0;
		pos=1;
		while(digit>0){
			rem=digit%10;
			value+=rem*pos;
			pos*=2;
			digit/=10;
		}
		oct=value*base+oct;
		base=base*10;
		tempbin/=1000;
	}
	printf("Octal number :%d\n",oct);
	return 0;
}


