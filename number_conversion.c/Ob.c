#include<stdio.h>
int main(){
	int oct,dec=0,bin[32],rem,base=1,i=0;
	printf("Enter octal number:");
	scanf("%d",&oct);

	while(oct!=0){
		rem=oct%10;
		dec+=rem*base;
		oct/=10;
		base*=8;
	}
	if(dec==0){
		printf("Binary=0\n");
		return 0;
	}
	printf("Decimal number:%d\n",dec);
	while(dec>0){
		bin[i++]=dec%2;
		dec/=2;
	}
	printf("Binary:");
	for(i=i-1;i>=0;i--){
		printf("%d",bin[i]);
	}
	printf("\n");
	return 0;
}

