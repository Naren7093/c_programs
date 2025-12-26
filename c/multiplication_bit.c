#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a & b: ");
	scanf("%d %d",&a,&b);

	int positive=1;
	if(a<0){
		a=-a;
		positive=-positive;
	}
	if(b<0){
		b=-b;
		positive=-positive;
	}
	int result=0;
	for(int i=0;i<b;i++){
		result+=a;
	
	}
	result=result*positive;
	printf("Multiplication of a and b is:%d\n",result);
	return 0;
}

