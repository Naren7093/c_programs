#include<stdio.h>
int main(){
	int a,b;
	int hcf=1,lcm;
	printf("Enter a and b:");
	scanf("%d %d",&a,&b);

	for(int i=1;i<=a && i<=b; i++){
		if(a%i==0 && b%i==0)
		hcf=i;
	}
	lcm=(a*b)/hcf;
	printf("Lcm of a and b is :%d\n",lcm);
	printf("Hcf of a and b is :%d\n",hcf);
	return 0;
}

