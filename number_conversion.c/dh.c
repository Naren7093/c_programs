#include<stdio.h>
int main(){
	int dec,tempdec;
	int hex[10],i=0,j;

	printf("Enter decimal number:");
	scanf("%d",&dec);

	tempdec=dec;
	if(tempdec==0){
		printf("Original=hexadecimal:0\n");
	}
	while(tempdec>0){
		hex[i]=tempdec%16;
		tempdec/=16;
		i++;
	}
	printf("Hexadecimal:");
	for(j=i-1;j>=0;j--){
		if(hex[j]>9){
			printf("%c",hex[j]+55);
		}
		else{
			printf("%d",hex[j]);
		}

	}
	printf("\n");
	return 0;
}
