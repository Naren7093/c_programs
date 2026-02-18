#include<stdio.h>
int main(){
	int n,sum,i,j,limit;
	printf("Enter limit:");
	scanf("%d",&limit);
	
	printf("Perfect numbers up to %d are:\n", limit);
	for(n=2;n<limit;n++){
		sum=0;
		for(i=1;i<n;i++){

			if((n%i)==0){
				sum+=i;
			}

		}
		if(sum==n){
			printf("%d ",n);
		}
	}
	printf("\n");
	return 0;
}

