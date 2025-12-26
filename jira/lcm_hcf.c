#include<stdio.h>
int main(){
	int lcm,gcd,x,y,a,b;
	printf("Enter a & b:");
	scanf("%d %d",&a,&b);

	x=a;
	y=b;
	while(y!=0){
		int temp=y;
		y=x%y;
		x=temp;
	}
	gcd=x;
	lcm=(a*b)/gcd;
	printf("Hcf : %d\n",gcd);
	printf("Lcm : %d\n",lcm);

	return 0;
}
