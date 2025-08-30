#include<stdio.h>

int naren(char*p1,char*p2){
	while(*p1!='\0' && *p2!='\0'){
		if(*p1!=*p2)
			return*p1-*p2;
		p1++;
		p2++;
	}
	return *p1-*p2;
}
int main(){
	char s1[]="Narendra Pinninti";
	char s2[]="Narendra Modi";

	int result=naren(s1,s2);
	if(result==0)
		printf("Equal strings\n");
	else if(result<0)
		printf("s1 is smaller\n");
	else
		printf("s1 is greater\n");
	return 0;
}

