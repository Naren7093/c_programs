#include<stdio.h>
int main(){
	int i,j,num=1;
	int n=6;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",num++);
		}
		printf("\n");
	}
	return 0;
}
