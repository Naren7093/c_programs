#include<stdio.h>
int main(){
	int i,j,k,value;
	int n=6;
	for(i=0;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		value=1;
		for(k=0;k<=i;k++){
			printf("%4d",value);
		value=value*(i-k)/(k+1);
		}
		printf("\n");
	}
	return 0;
}

		
