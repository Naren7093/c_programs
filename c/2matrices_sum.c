#include<stdio.h>

void sum2d(int r,int c,int a[r][c],int b[r][c],int sum[r][c]){
 	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
}
int main(){
	int r,c;
	
	printf("Enter row and column:");
	scanf("%d %d",&r,&c);

	int a[r][c],b[r][c];
	int sum[r][c];
	printf("Enter elements of a[%d][%d]\n",r,c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	 printf("Enter elements of b[%d][%d]\n",r,c);
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        scanf("%d",&b[i][j]);
                }
        }
	sum2d(r,c,a,b,sum);
	printf("Addition of two matrices:\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",sum[i][j]);
		}
	printf("\n");
	}
	return 0;
}


