#include<stdio.h>
#include<string.h>
int main(){
	char str[20],ch;
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';

	printf("Enter a character:");
	scanf("%c",&ch);

	int len=strlen(str);
	int index=-1;

	for(int i=0;i<len;i++){
		if(str[i]==ch){
			index=i;
			break;

		}
	}
	if(index==-1){
		printf("Not found\n");
	}
	for(int i=index;i<len;i++){
		str[i]=str[i+1];

	}
	printf("Final string is :%s\n",str);
	return 0;
}
