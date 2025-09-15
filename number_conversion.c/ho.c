#include<stdio.h>
int main(){
	char hex[10];
	int value;
	int dec=0,i=0;

	printf("Enter hexadecimal number:");
	scanf("%s",hex);

	for(i=0;hex[i]!='\0';i++){
		if(hex[i]>='0'&& hex[i]<='9')
			value=hex[i]-'0';
		else if(hex[i]>='A'&& hex[i]<='F')
			value=hex[i]-55;
		else if(hex[i]>='a'&&hex[i]<='f')
			value=hex[i]-'a'+10;
		else{
			printf("Inavlid hexadecimal number:%c\n",hex[i]);
			return 1;
		}
		dec=dec*16+value;
	}
	printf("Decimal equivalent :%d\n",dec);

	int oct[20],j=0,k;
	int temp=dec;
	while(temp>0){
		oct[j]=temp%8;
		temp/=8;
		j++;
	}
	printf("Octal equivalent:");
	for(k=j-1;k>=0;k--){
		printf("%d",oct[k]);
	}
	printf("\n");
	return 0;
}


