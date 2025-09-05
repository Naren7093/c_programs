#include<stdio.h>
int main(){
	int n,temp,digit,i,sum,fact;
	int limit;
	printf("Enter limit:\n");
	scanf("%d",&limit);
	printf("limit upto %d are:\n",limit);
	for(n=1;n<=limit;n++){
	    sum=0;

//	printf("Enter a number:\n");
//	scanf("%d",&n);
	temp=n;
	while(temp>0){
		digit=temp%10;
		fact=1;
		for(i=1;i<=digit;i++){
			fact*=i;
		}
		sum+=fact;
		temp/=10;
	}
	if(sum==n){
		printf("%d is strong number\n",n);
	}
	//	else
	//		printf("%d Not a strong number\n",n);
	}
	return 0;
}

