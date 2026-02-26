#include<stdio.h>
int main(){
        int i,j,k,rows,flag,num=2;

        printf("Enter number of rows:");
        scanf("%d",&rows);

        for(i=1;i<=rows;i++){
		for(j=1;j<=rows-i;j++){
			printf(" ");
		}
                for(j=1;j<=i;){

                        flag=1;
                        for(k=2;k*k<=num;k++){
                                if(num%k==0){
                                        flag=0;
                                        break;
                                }
                        }

                        if(flag==1){
                                printf("%d ",num);
                                j++;
                        }
                        num++;
                }
                printf("\n");
        }
        return 0;
}
