#include<stdio.h>
void naren(char *s1){
	char*p1=s1;
	char*p2=s1;
	char temp;

	while(*p2!='\0')
	       	p2++;
	p2--;
	while(p1<p2){
		temp=*p1;
	*p1=*p2;
	*p2=temp;
	p1++;
	p2--;
	}

}
int main(){
	char s1[]="ardneran";
	naren(s1);
	printf("Reversed string:%s\n",s1);
	return 0;
}
