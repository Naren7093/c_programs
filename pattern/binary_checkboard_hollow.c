#include<stdio.h>
int main(){
	int i,j,n=6;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n){
				if((i+j)%2==0){
					printf("1 ");
				}
				else{
					printf("0 ");
				}
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}

