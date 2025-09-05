#include<stdio.h>
int main(){
        int limit,n,i,sum;
        printf("Enter limit:\n");
        scanf("%d",&limit);
	
	printf("Perfect number upto %d are:\n",limit);
	for(n=2;n<=limit;n++){
		sum=0;
        for(i=1;i<n;i++){
                if(n%i==0){
                        sum+=i;
                }
        }
        if(sum==n)
                printf("%d is perfect number\n",n);
       // else
         //       printf("%d Not a perfect number\n",n);
	}
	return 0;

}


