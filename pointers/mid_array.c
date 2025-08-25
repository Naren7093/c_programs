#include<stdio.h>
//int midvalue(int a[],int n,int*mid)
int*midvalue(int a[],int n)
{
//	*mid=a[n/2];
//	return 0;
	return &a[n/2];
}
int main(){
	int a[]={1, 2, 3, 4, 5,};
	int n=sizeof(a)/sizeof(a[0]);
//	int mid;
	int*mid;
	mid=midvalue(a,n);
//	midvalue(a,n,&mid);
	printf("%d is midvalue:\n",*mid);
//        printf("%d is midvalue:\n",mid);
//	return 0;
}
