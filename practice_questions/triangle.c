#include<stdio.h>
int main(){
	int i,j,n=6;
	printf("Right triangle:\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("Inverted right triangle:\n");
	for(i=n-1;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("Hollow right triangle:\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i==n||j==1||j==i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("Hollow inverted right triangle:\n");
	for(i=n-1;i>=1;i--){
		for(j=1;j<=i;j++){
			if(i==n||i==1||j==1||j==i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}

