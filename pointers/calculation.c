#include<stdio.h>
void addition(int*x,int*y){
        printf("Addition:%d\n",*x+*y);
}
void subtraction(int*x,int*y){
        printf("Subtraction:%d\n",*x-*y);
}
void multiplication(int*x,int*y){
        printf("Multiplication:%d\n",(*x)*(*y));
}
void division(int*x,int*y){
        if(*y==0){
                printf("error:\n");
        }
        else{
                printf("Division:%2f\n",(float)(*x)/(*y));
}
}
int main(){
        int a,b,choice;
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);

        void (*p[4])(int* ,int*)={addition,subtraction,multiplication,division};
        printf("choose option:");
        scanf("%d",&choice);
        if(choice>=0 && choice<4){
                (p[choice](&a,&b));

        }
        else{
                printf("invalid");
        }
        return 0;
}

