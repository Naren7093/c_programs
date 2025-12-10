#include<stdio.h>
int main(){
	int i,limit,flag,j;
	printf("Enter range of numbers:");
	scanf("%d",&limit);
	
	printf("Prime numbers are in range of %d \n",limit);
	for(i=1;i<=limit;i++){
		flag=1;
		for(j=2;j<i/2;j++){

		if(i%j==0){
			flag=0;
			break;

		}
	}
	if(flag==1){
		printf("%d ",i);
	}
	}
	printf("\n");
	return 0;
}


