#include<stdio.h>
int main(){
	int i,j;
	int n=6;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		for(j=1;j<=2*(n-i)-1;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(j==1&&i==n){
				continue;
			}
			else{
			printf("*");
			}
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		for(j=1;j<=2*(n-i)-1;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
