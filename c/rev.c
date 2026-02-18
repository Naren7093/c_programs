#include<stdio.h>
#include<string.h>

int main(){
	char str[50];
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")] ='\0';

	int len=0;
	while(str[len]!='\0')
	len++;
	int j=len-1;
	for(int i=0;i<j;i++,j--){
		int temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("Reversed string:%s\n",str);
	return 0;
}
	
