#include<stdio.h>
int main(){
	int i,j,k,n=6;
	int num=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%2d ",num);
			num+=2;
		}
		printf("\n");
	}
	return 0;
}
