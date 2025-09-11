#include<stdio.h>
#define size 8
int main(){
	char bin[size+1],onesc[size+1],twos[size+1];
	int i,carry=1;

	printf("Enter %d binary number:\n",size);
	scanf("%s",bin);

	for(i=0;i<size;i++){
		if(bin[i]=='1')
			onesc[i]='0';
		
		else if(bin[i]=='0')
			onesc[i]='1';
			else{
				printf("Invalid input at position %d!\n",i);
				return 1;
		}
	}
		onesc[size]='\0';
		for(i=size-1;i>=0;i--){
			if(onesc[i]=='1'&&carry==1){
				twos[i]='0';
				
			}
				else if(onesc[i]=='0'&&carry==1){
					twos[i]='1';
					carry=0;
						
				}
		
					else {
						twos[i]=onesc[i];
					}
		}
					twos[size]='\0';
						printf("Original binary number:%s\n",bin);
						printf("Ones compliment:%s\n",onesc);
				         	printf("Twos's compliment:%s\n",twos);
return 0;
}

