#include<stdio.h>
int main(){
	int n,rem,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&n);

	temp=n;
	while(temp>0){
		rem=temp%10;
		sum=sum*10+rem;
		temp/=10;
	}
	if(sum==n){
		printf("Number is palindrome\n");
	}
	else{
		printf("Not a palindrome\n");
	}
	return 0;
}
