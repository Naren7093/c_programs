#include<stdio.h>

int maxmin(int a[],int n,int*max,int*min)
{
	*max=*min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>*max)
			*max=a[i];
		if(a[i]<*min)
			*min=a[i];
	}
}
int main(){
	int a[]={3,4,1,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	int max,min;

	maxmin(a,n,&max,&min);
	printf("Maximum value in array:%d\n",max);
	printf("Minimum value in array:%d\n",min);
return 0;
}

