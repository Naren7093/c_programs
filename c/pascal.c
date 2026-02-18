#include<stdio.h>
int main(){
	int i,j,k,n,value;
	printf("Enter size:");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		value=1;
		for(j=0;j<(n-i-1);j++){
			printf("  ");
		}

			for(k=0;k<=i;k++){
				printf("%5d",value);
				value=value*(i-k)/(k+1);
			}
		
		printf("\n");
		}
		return 0;
	}


