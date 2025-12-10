#include<stdio.h>
int main(){
	int n,i,j,k,a[10];
	int found=0;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d of elements:",n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}

	printf("Duplicate elements are:");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				printf("%d ",a[i]);
				found=1;

				for (k = j; k < n - 1; k++)
                   			 a[k] = a[k + 1];

               			 n--;
               			 j--;
			}
		}
	}
	if(!found){
		printf("None");
	}
	printf("\nAfter removing duplicate elements\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	printf("\n");
	return 0;
}
