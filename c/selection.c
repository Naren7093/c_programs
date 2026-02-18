#include<stdio.h>
int main(){
	int i,j,n,temp;
	int a[10];
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements of array:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	printf("After selection sorting of an array\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}

	printf("\n");
	return 0;
	}


