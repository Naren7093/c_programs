#include<stdio.h>
#define size 8
int main(){
	char bin[size+1],onesc[size+1];
	int i,error=0;

	printf("Enter %d-bit binary number:\n",size);
	scanf("%s",bin);

	for(i=0;i<size;i++){
		if(bin[i]=='1')
			onesc[i]='0';
		else if(bin[i]=='0')
			onesc[i]='1';
		else
		{
			printf("Invalid input\n");
			error=1;
			break;
		}
	}
	onesc[size]='\0';
		if(!error){
			printf("Original binary number:%s\n",bin);
			printf("Ones compliment:%s\n",onesc);
		}
	
	return 0;
}
