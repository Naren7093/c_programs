#include<stdio.h>
int main(){
	int i,j;
	int n=6,num=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
