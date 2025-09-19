#include<stdio.h>
int main(){
	long long bin,tempbin;
	int dec=0,rem,base=1;

	printf("Enter  binary number:");
	scanf("%lld",&bin);

	tempbin=bin;
	while(tempbin>0){
		rem=tempbin%10;
		dec+=rem*base;
		tempbin/=10;
		base*=2;
	}
	printf("Decimal number:%d\n",dec);

	int oct[32],i=0;
	int temp=dec;
	while(temp>0){
		oct[i++]=temp%8;
		temp/=8;
	}
	printf("Octal number: ");
for(int j=i-1;j>=0;j--){
	printf("%d",oct[j]);
}

        int k = 0;
        int hex[50];
	while(dec>0){
		hex[k++]=dec%16;
		dec/=16;
	}
	printf("\nHexadecimal number: ");
	for(int j=k-1;j>=0;j--){
	if(hex[j]<10)
		printf("%d",hex[j]);
	else
		printf("%c",hex[j]+55);
	}
	printf("\n");
	return 0;
}
		
