#include<stdio.h>
int main(){
	int i,j;
	int n=6;
	for(i=n;i>=1;i--){
		for(j=0;j<=i;j++){
			printf("%c ",'A'+j);
		}
		printf("\n");
	}
	return 0;
}
