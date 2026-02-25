#include<stdio.h>
int main(){
	int i,j;
	int n=6;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i==1||j==1||i==j){
			printf("*");
			}
			else{
				printf(" ");
			}
		}
		for(j=1;j<=2*(n-i)-1;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(i==n&&j==1){
				continue;
			}
			else if(i==1||j==1||i==j){
			printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--){
		for(j=1;j<=i;j++){
			if(i==1||j==1||i==j){
			printf("*");
			}
			else{
				printf(" ");
			}
		}
		for(j=1;j<=2*(n-i)-1;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(i==1||j==1||i==j){
			printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
