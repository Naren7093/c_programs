#include<stdio.h>
#include<string.h>
int main(){
	char s[20];
	int ispalindrome=1;
	printf("Enetr a string:");
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';

	int i=0;
        int j=strlen(s)-1;
    	while(i<j){
		if(s[i]!=s[j]){
			ispalindrome=0;
			break;
		}
		i++;
		j--;
	}
	if(ispalindrome)
		printf("%s is a palindrome\n",s);
	else
		printf("%s is not a palindrome\n",s);
	return 0;
}
