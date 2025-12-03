#include<stdio.h>
#include<string.h>

int rev_noswap(char s1[],char s2[]){
	int len=strlen(s1);
	int i,j=0;
	for(i=len-1;i>=0;i--){
		s2[j]=s1[i];
		j++;
	}
	s2[j]='\0';
}

int main(){
	char s1[20],s2[30];
	printf("Enter a string:");
	fgets(s1,sizeof(s1),stdin);
	s1[strcspn(s1,"\n")]='\0';
        
	rev_noswap(s1,s2);
	printf("Reversed string is:%s\n",s2);
	return 0;
}
