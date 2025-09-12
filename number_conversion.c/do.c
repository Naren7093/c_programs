#include<stdio.h>
int main(){
	int dec,tempdec;
	int oct[32],i=0,j;

	printf("Enter decimal number:");
	scanf("%d",&dec);

	tempdec=dec;
	if(tempdec==0){
		printf("Original = ocatl:0\n");
	}
	while(tempdec>0){
		oct[i]=tempdec%8;
		tempdec/=8;
		i++;
	}
	printf("Octal number:");
	for(j=i-1;j>=0;j--){
		printf("%d",oct[j]);
	}
	printf("\n");
	return 0;
}
