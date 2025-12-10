#include<stdio.h>
int main(){
	int n;
	printf("Enter size of square:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n||j==i||j==(n-i+1)){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}

