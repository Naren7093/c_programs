#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	int vowel=0;
	int consonant=0;
	int count=0;
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';

	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
		printf(" vowel:%c ->ASCII:%d \n ",str[i],str[i]);
		vowel++;
	}
		else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
       		printf("consonant:%c ->ASCII:%d \n",str[i],str[i]);
		consonant++;
		}
		count++;
	}
	
	printf("\nTotal count:%d",count);
	printf("\nVowels in string :%d\n",vowel);
	printf("consonants in string :%d\n",consonant);
	
	return 0;
	}


	


