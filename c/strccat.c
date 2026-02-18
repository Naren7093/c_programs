#include<stdio.h>
#include<string.h>

int mystrlen(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}
void strcon(char dst[],char str[]){
	int i=0,j=0;
	while(dst[i]!='\0'){
		i++;
	}
	dst[i++]=' ';
	while(str[j]!='\0'){
		dst[i]=str[j];
		i++;
		j++;
	}
	dst[i]='\0';
}
int main(){
	char s1[20];
	char s2[15];
	printf("Enter string of s1:");
	fgets(s1,sizeof(s1),stdin);
	s1[strcspn(s1,"\n")]='\0';

	printf("Enter string of s2:");
        fgets(s2,sizeof(s2),stdin);
        s2[strcspn(s2,"\n")]='\0';

       	printf("\nLength of s1 = %d\n", mystrlen(s1));
        printf("Length of s2 = %d\n", mystrlen(s2));


	strcon(s1,s2);
	printf("After concantation:%s\n",s1);
	printf("Totalof string = %d\n", mystrlen(s1));
	return 0;
}

