#include<stdio.h>
int main(){
	int i,j;
	int n=6;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i==1||i==n||j==i||j==1){
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
