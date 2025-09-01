#include<stdio.h>
void bubblearray(int*p,int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(p+j)>*(p+j+1)){
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	
	}
}
void printarray(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d",*(a+i));
	}
	printf("\n");
}
int main(){
	int arr[]={5,6,3,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);

	printf("Original array:");
	printarray(arr,n);

	bubblearray(arr,n);

	printf("Sorted array:");
	printarray(arr,n);
	return 0;
}







