#include<stdio.h>

int main(){
	int rem,n,temp,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);

	temp=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("Reversed number: %d\n",rev);
	n=temp;
	if(n==rev)
	printf("Given number is palindrome\n");
	else{
		printf("Given number is not a palindrome\n");
 	}
		return 0;
	}
