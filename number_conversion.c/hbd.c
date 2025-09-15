#include<stdio.h>
int main(){
        char hex[20];
        int dec=0,i=0,j;
        int value;

        printf("Enter Hexadecimal number:");
        scanf("%s",hex);

        printf("Binary equivalent:");
        for(i=0;hex[i]!='\0';i++){

                if(hex[i]>='0'&& hex[i]<='9')
                        value=hex[i]-'0';
                else if(hex[i]>='A'&& hex[i]<='F')
                        value=hex[i]-55;
                else if(hex[i]>='a'&& hex[i]<='f')
                        value=hex[i]-'a'+10;
                else{
                        printf("Inavlid hex digit %s\n",hex);
                        return 1;
                }
                dec=dec*16+value;
        for(j=3;j>=0;j--){
                printf("%d",(value>>j)&1);
        }
        }
        printf("\nDecimal equivalent:%d",dec);

        printf("\n");
        return 0;
}

