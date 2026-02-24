#include<stdio.h>
int main(){
	int i,j;
	int n=6;
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			if(i==1||i==n||j==1||j==i){
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
