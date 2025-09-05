#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&n);

	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n)
		printf("%d is perfect number\n",n);
	else
		printf("%d Not a perfect number\n",n);
}
