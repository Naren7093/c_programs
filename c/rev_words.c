#include<stdio.h>
#include<string.h>

int main(){
	char str[20];
	int start=0,end=0;
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';

	int len=strlen(str);
	for(int i=0;i<=len;i++){
		if(str[i]==' ' || str[i]=='\0'){
			end=i-1;
			while(start<end){
				char temp=str[start];
				str[start]=str[end];
				str[end]=temp;
			start++;
			end--;
			}
			start=i+1;
		}
	}
	printf("Words reversed string:%s\n",str);
	return 0;
}



