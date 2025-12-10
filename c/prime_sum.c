#include<stdio.h>
int main(){
	int i,limit,flag,j,sum=0;
	printf("Enter range of numbers:");
	scanf("%d",&limit);
	
	printf("Prime numbers are in range of %d \n",limit);
	for(i=2;i<=limit;i++){
		flag=1;
		for(j=2;j<i/2;j++){

		if(i%j==0){
			flag=0;
			break;

		}
	}
	if(flag==1)
	{
		printf("%d ",i);
		sum+=i;
	}
	}
	printf("\nsum of %d prime numbers is:%d\n",limit,sum);

	return 0;
}


