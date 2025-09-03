#include<stdio.h>
int main(){
	int num,pos=-1;
	printf("Enter number:\n");
	scanf("%d",&num);

	if(num==0){
		printf("Not defined for 0:\n");
		return 0;
	}
	int temp=num;
	
	while(temp>0){
		pos++;
		temp>>=1;
	}
	int msb=(1<<pos);
        
	printf("Msb at position :%d\n",pos);
	printf("Msb value:%d\n",msb);
	return 0;
}
		
