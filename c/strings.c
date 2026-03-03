#include<stdio.h>

int len(char *str){
    char *ptr = str;
    while(*ptr != '\0'){
        ptr++;
    }
    return ptr - str;
}

void cpy(char str[], char dst[]){
    int i;
    for(i = 0; str[i] != '\0'; i++){
        dst[i] = str[i];
    }
    dst[i] = '\0';
}

int cat(char *dst, char *dst2){
    char *start = dst;

    while(*dst != '\0'){
        dst++;
    }

    while(*dst2 != '\0'){
        *dst = *dst2;
        dst++;
        dst2++;
    }

    *dst = '\0';

    return dst - start;
}

int comp(char *dst, char *dst2){
    while(*dst != '\0' && *dst2 != '\0'){
        if(*dst != *dst2){
            return *dst - *dst2;
        }
        dst++;
        dst2++;
    }
    return *dst - *dst2;
}

void rev(char str[]){
    int i = 0;
    int j = len(str) - 1;
    char temp;

    while(i < j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main(){
    char str[10];
    printf("Enter a string: ");
    scanf("%9s", str);
    
    int length = len(str);
    printf("Length of the string is %d\n", length); 
    
    char dst[20];
    cpy(str, dst);
    printf("Copied string is %s\n", dst);
    
    char dst2[20];
    printf("Enter string2: ");
    scanf("%19s", dst2);
    
    int newlen = cat(dst, dst2);
    printf("Concatenated string: %s\n", dst);
    printf("Total length after concatenation: %d\n", newlen);
    
    int result = comp(dst, dst2);
    if(result == 0){
        printf("Strings are equal\n");
    }
    else if(result < 0){
        printf("Str1 is smaller than str2\n");
    }
    else{
        printf("Str1 is greater than str2\n");
    }

    rev(dst);
    printf("Reversed string: %s\n", dst);

    return 0;
}
