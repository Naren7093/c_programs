#include<stdio.h>

int naren(char*p){
	int length=0;
	while(*p!='\0'){
		p++;
		length++;
	}
	return length;
}
int main(){
	char s1[]="Narendra";
	int len=naren(s1);
	printf("Length of string:%d\n",len);
	return 0;
}

