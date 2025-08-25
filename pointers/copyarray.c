#include<stdio.h>

void copyarray(int*p1,int*p2,int n)
{
	for(int i=0;i<n;i++)
	{
		*(p2+i)=*(p1+i);
	}
}
int main(){
	int arr1[10],arr2[10];
	int n,i;
	printf("Enter size of array:\n");
	scanf("%d",&n);

	printf("Enter %d elements of array1:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",arr1+i);
	}

	copyarray(arr1,arr2,n);
	printf("copied array:\n");
	for(i=0;i<n;i++){
		printf("%d\n",*(arr2+i));
	}
	printf("\n");
	return 0;
}
