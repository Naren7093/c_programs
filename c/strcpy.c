#include<stdio.h>
#include<string.h>

void strcopy(char dst[],char s[]){
	int i;
	for(i=0;s[i]!='\0';i++){
		dst[i]=s[i];
	}
		dst[i]='\0';
	
}
int main(){
	char s[20];
	printf("Enter the string:");
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';

	char dst[30];
	strcopy(dst,s);
	printf(" copied %s to destination\n",dst);
	return 0;
}

