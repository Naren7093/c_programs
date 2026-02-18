#include<stdio.h>
#define size 8
int main(){
	int i;
	char bin[size+1],ones[size+i];
	int error=0;
	printf("Enter %d bit binary :",size);
	scanf("%s",bin);

	for(i=0;i<size;i++){
		if(bin[i]=='1'){
			ones[i]='0';
		}
		else if(bin[i]=='0'){
			ones[i]='1';
		}
		else{
			printf("Invalid input\n");
			error=1;
			break;
		}
	}
		ones[size]='\0';
		if(!error){
			printf("Original binary: %s\n",bin);
			printf("Ones compliment of a binary is:%s\n",ones);
		}
	
		return 0;
	}
