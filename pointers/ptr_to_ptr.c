#include<stdio.h>

int main(){
	int a=1;
	int*b,*c;
	b=&a;
	b=c;
	printf("%d %d\n",*b,*c);
}
