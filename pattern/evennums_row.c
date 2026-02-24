#include<stdio.h>
int main(){
	int i,j,n=6;
	int value;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			value=2*j;
			printf("%d ",value);
		}
		printf("\n");
	}
	return 0;
}
