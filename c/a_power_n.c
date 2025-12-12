#include<stdio.h>
int main(){
	int a,n;
	printf("Enter base number:");
	scanf("%d",&a);

	printf("Enter exponent:");
	scanf("%d",&n);

	long long result=1;

	for(int i=0;i<n;i++){
		long long x=result;
	        int y=a;
       		int temp=0;
 	while(y>0){
		if(y&1){
		temp+=x;
	}
	x<<=1;
	y>>=1;
	}
	result =temp;
	}
	printf("%d^%d=%lld\n",a,n,result);
	return 0;
}	
