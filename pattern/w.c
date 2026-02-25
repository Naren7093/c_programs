#include<stdio.h>
int main(){
	int i,j,k;
	int n=6;
	for(i=n;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(i==1||j==2*i-1||j==1){
			printf("*");
			}
			else{
				printf(" ");
			}
		}
		for(j=1;j<=2*(n-i);j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			if(i==1||k==2*i-1||k==1){
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
