#include<stdio.h>
int main(){
	long long bin,tempbin;
	int decimal=0,base=1,rem,hex[100],i=0;

	printf("Enter binary number:");
	scanf("%lld",&bin);

	tempbin=bin;
	while(tempbin!=0){
		rem=tempbin%10;
		decimal+=rem*base;
		tempbin/=10;
		base*=2;
	}
	 if(decimal == 0) { 
        printf("Hexadecimal number: 0\n");
        return 0;
    }
	while(decimal!=0){
		hex[i]=decimal%16;
		decimal/=16;
		i++;
	}
	printf("Hexadecimal number:");
	for(int j=i-1;j>=0;j--){
		if(hex[j]>9)
			printf("%c",hex[j]+55);
		else
			printf("%d",hex[j]);
	}
	printf("\n");
	return 0;
}
