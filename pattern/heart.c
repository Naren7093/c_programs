#include<stdio.h>
int main(){
	int i,j,k;
	int n=6;
	for(i=n/2;i<=n;i+=2){
		for(j=1;j<n-i;j+=2){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=n;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

