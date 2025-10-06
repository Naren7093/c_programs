#include<stdio.h>
void numberpyramid(int n){
	int i,j,k;
	int num=1;

	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		
		for(k=1;k<=i;k++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
void oddsstarpy(int n){
	int i,j,k;
	int num=1;

	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=i;k++){
			            if (num % 2!=0)
				printf("* ");
			else
				printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}

void evensstarpy(int n){
        int i,j,k;
        int num=1;

        for(i=1;i<=n;i++){
                for(j=1;j<=n-i;j++)
                        printf(" ");
                for(k=1;k<=i;k++){
                        if(num%2==0)
                                printf("* ");
                        else
                                printf("%d ",num);
			num++;
                }
                printf("\n");
        }
}
void oddpy(int n){
        int i,j,k;
        int num=1;

        for(i=1;i<=n;i++){
                for(j=1;j<=n-i;j++)
                        printf(" ");
                for(k=1;k<=i;k++){
                        printf("%d ",num);
			num+=2;
		}
                printf("\n");
        }
}

void evenpy(int n){
        int i,j,k;
        int num=2;

        for(i=1;i<=n;i++){
                for(j=1;j<=n-i;j++)
                        printf(" ");
                for(k=1;k<=i;k++){
                        printf("%d ",num);
                        num+=2;
		}
                printf("\n");
        }
}

void rowwisepy(int n){
	int i,j,k;

	for(i=1;i<=n;i++){
	
		for(k=1;k<=i;k++)
			printf("%d",k);
		
			printf("\n");
		}
}
void rowevenstarwisepy(int n){
        int i,j,k;
        
        for(i=1;i<=n;i++){
                //for(j=1;j<=n-i;j++)
                  //      printf(" ");
                for(k=1;k<=i;k++){
		        
			if(k%2==0)
				printf("* ");
			else
                        printf("%d ",k);
                       
		}
                printf("\n");
        }
}

void rowoddwisepy(int n){
        int i,j,k;
        int num;

        for(i=1;i<=n;i++){
               // for(j=1;j<=n-i;j++)
                 //       printf(" ");
                for(k=1;k<=i;k++){
			num=2*k-1;
                        printf("%d ",num);
		}
                printf("\n");
        }
}
void pascal(int n){
	int value,i,j,k;

	for(i=0;i<=n;i++){
		
		for(j=0;j<=n-i-1;j++)
			printf(" ");
		value=1;
		for(k=0;k<=i;k++){
			printf("%d  ",value);
			value=value*(i-k)/(k+1);
		}
		printf("\n");
	}
}
void zigzag(int n){
	int i,j;
	int num=1;
	 for(i=1;i<=n;i++){
		 if(i%2!=0){
			 for(j=1;j<=n;j++)
				 printf("%2d ",num++);
			 }
			 else{
				 int temp=num+n-1;
				 for(j=1;j<=n;j++){
					 printf("%2d ",temp);
					 temp--;
					 num++;
				 }
			 }
			 printf("\n");
		 }
	 }


int main(){
	int n;
	printf("Enter size:");
	scanf("%d",&n);

	printf("\n Numberpyramid:\n");
	numberpyramid(n);

	printf("\n odd'sstarpyramid:\n");
	oddsstarpy(n);

	printf("\n even'sstarpyramid:\n");
	evensstarpy(n);

	printf("\n Oddnumberpyramid:\n");
	oddpy(n);

	printf("\n Evennumberpyramid:\n");
	evenpy(n);

	printf("\n Row_wise numberpyramid:\n");
	rowwisepy(n);

	printf("\n Row_wise  evenstar number pyramid:\n");
	rowevenstarwisepy(n);

	printf("\n Row_wise oddnumber pyramid:\n");
	rowoddwisepy(n);

	printf("\n Pascal:\n ");
	pascal(n);

	printf("\n zig zag:\n");
	zigzag(n);

	return 0;
}




