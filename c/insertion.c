#include<stdio.h>
int main(){
	int i,n,j,temp;
	int a[20];
	printf("Enter size of an array:");
	scanf("%d",&n);

	printf("Enter %d elements of an array:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("Insertion sorting:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
