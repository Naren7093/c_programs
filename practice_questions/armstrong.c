#include<stdio.h>
int main(){
	int i,n,temp,sum,digit,count,power;
//	printf("Enter a number:\n");
//	scanf("%d",&n);
        
	int limit;
	printf("Enter limit:\n");
	scanf("%d",&limit);
	printf("Numbers between 1 and %d are:\n",limit);
	for(n=1;n<=limit;n++){
		temp=n;
		count=0;
		sum=0;

	while(temp>0){
		count++;
		temp/=10;
	}
	temp=n;
	while(temp>0){
		digit=temp%10;
		power=1;
		for(i=1;i<=count;i++){
			power=power*digit;
		}
		sum=sum+power;
		temp/=10;
	}
	
	if(sum==n){
		printf("%d\n",n);
	}
	
	}
		//else
	//	printf("%d is not an armstrong number:\n",n);

	return 0;
}

