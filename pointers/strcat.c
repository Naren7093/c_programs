#include<stdio.h>

void naren(char*p1,char*p2,int n){
	while(*p1!='\0')
		p1++;
	while(n>0 && *p2!='\0'){
		*p1=*p2;
		p2++;
		p1++;
		n--;
	}
	*p1='\0';
}
int main(){
	char s1[]="Pinninti";
	char s2[20]="Narendra";

	naren(s1,s2,8);
	printf("Concatenation string:%s\n",s1);
	return 0;
}

		
