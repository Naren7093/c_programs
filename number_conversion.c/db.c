#include<stdio.h>
int main(){
	int dec,tempdec;
	int bin[32];
        int i=0,j;

	printf("Enter decimal number:");
	scanf("%d",&dec);

	tempdec=dec;
	if(tempdec==0){
		printf("original=binary:0\n");
	}
	while(tempdec>0){
		bin[i]=tempdec%2;
		tempdec/=2;
		i++;
	}
	printf("Binary number:");
	for(j=i-1;j>=0;j--){
		printf("%d",bin[j]);
	}
	printf("\n");
	return 0;
}
