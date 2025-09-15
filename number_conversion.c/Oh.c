#include<stdio.h>
int main(){
	long long oct,tempoct;
	int hex[30],rem,dec=0,i=0,base=1;

	printf("Enter octal number:");
	scanf("%lld",&oct);

	tempoct=oct;
	while(tempoct>0){
		rem=tempoct%10;
		dec+=rem*base;
		tempoct/=10;
		base*=8;
	}
	while(dec!=0){
		hex[i++]=dec%16;
		dec/=16;
	}
	printf("Octal number:%lld\n",oct);
	printf("Hexadecimal number= ");
	if(i==0){
		printf("0");
	}
	else{
		for(int j=i-1;j>=0;j--){
			if(hex[j]<10){
			printf("%d",hex[j]);
			}
			else{
				printf("%c",hex[j]+55);
			}
		}
	}
		printf("\n");
		return 0;
	}

