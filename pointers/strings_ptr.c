#include<stdio.h>
int naren(char*p1){
	int length=0;
	while(*p1!='\0'){
		p1++;
	length++;
	}

return length;
}
void copy(char *p3,char*p1){
	while(*p1!='\0'){
		*p3=*p1;
	p1++;
	p3++;
}
*p3='\0';
}
void add(char *p1,char*p2){
	while(*p1!='\0'){
		p1++;
	}
	while(*p2!='\0'){
		*p1=*p2;
	p1++;
	p2++;
}
*p1='\0';
}
int compare(char*p1,char*p2){
	while(*p1!='\0'&&*p2!='\0'){
		if(*p1!=*p2)
			return*p1-*p2;
	p1++;
	p2++;
}
return*p1-*p2;
}
void reverse(char *p1){
	char*p2=p1;
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
	char s1[20]="Narendra";
	char s2[]="Pinninti";
	char s3[30];

        int length=naren(s1);
	printf("String length:%d\n",length);

	copy(s3,s1);
	printf("Copied string:%s\n",s3);

        reverse(s3);
        printf("Reversed string:%s\n",s3);


	add(s1,s2);
	printf("Concentaion string:%s\n",s1);

        int result=compare(s1,s2);
	if(result==0)
		printf("Equal");
	else if(result<0)
		printf("s1 is smaller\n");
	else
		printf("s1 is greater\n");

	return 0;
}





