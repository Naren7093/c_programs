#include<stdio.h>
int main(){
        int i,j,k,n=6;
        for(i=1;i<=n;i++){
                for(j=1;j<=n-i;j++){
                        printf("  ");
                }
                        for(k=1;k<=2*i-1;k++){
                                printf("* ");
                        }
                        for(j=1;j<=2*(n-i);j++){
                                printf("  ");
                        }
                        for(k=1;k<=i;k++){
                                if(k==i||i==n||k==1)
                                        printf("* ");
                                else
                                        printf("  ");
                        }
                        printf("\n");
                }
                return 0;
        }

