#include<stdio.h>
 void reversearray(int*arr,int n)
{
	int *left=arr;
	int *right=arr+n-1;
	while(left<right){
		int temp=*left;
		*left=*right;
		*right=temp;
		left++;
		right--;
	}
}
int main(){
	int n,arr[10];
	printf("Enter size of array:\n");
	scanf("%d",&n);

	printf("Enter %d elements of array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	reversearray(arr,n);
	printf("Reversed array:\n");
	for(int i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	return 0;
}
