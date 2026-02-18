#include<stdio.h>
#include<string.h>

int strlength(char s1[]){
	int i=0;
	while(s1[i]!='\0'){
		i++;
	}
	return i;
}

int reversed(char s1[],char s2[]){
	int length=strlength(s1);
	int j=0;
	for(int i=length-1;i>=0;i--){
		s2[j]=s1[i];
		j++;
	}
	s2[j]='\0';
}

int isPalindrome(char s1[]) {
    int left = 0;
    int right = strlength(s1) - 1;

    while (left < right) {
        if (s1[left] != s1[right])
            return 0;  
        left++;
        right--;
    }
    return 1;  
}

int main(){
	char s1[20],s2[30];
	printf("Enter a string:");
	fgets(s1,sizeof(s1),stdin);
	s1[strcspn(s1,"\n")]='\0';
	
	int length=strlength(s1);
	printf("Length of the string is %d\n",length);

	reversed(s1,s2);
	printf("Reversed string is %s\n",s2);

	 if (isPalindrome(s1)){
        printf("Palindrome\n");
	 }
	    else{
        printf("Not a palindrome\n");
	    }

	return 0;
}
