#include<stdio.h>
int main(){
	int i,j,n=5;
	int num=1;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			for(j=1;j<=n;j++){
				printf("%d ",num++);
			}
		}
		else{
			int temp=num+n-1;
			for(j=1;j<=n;j++){
				printf("%d ",temp--);
				num++;
			}
		}
		printf("\n");
	}
	return 0;
}

