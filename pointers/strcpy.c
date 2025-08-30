#include<stdio.h>

void naren(char*p2,char*p1){
	while(*p1!='\0'){
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
}
int main(){
	char s1[]="Narendra";
	char s2[15];

	naren(s2,s1);
	printf("Copied string:%s\n",s2);
	return 0;
}


