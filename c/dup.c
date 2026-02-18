#include<stdio.h>
int main(){
	int a[10];
	int n,i;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements of array:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	int sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	int natural=((n-1)*n/2);
	int duplicate=sum-natural;
	printf("The duplicate element is :%d\n",duplicate);
	return 0;
}
