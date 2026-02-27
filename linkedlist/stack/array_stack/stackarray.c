#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top=-1;

int isFull(){
    return (top==MAX-1);
}

int isEmpty(){
    return (top==-1);
}

void push(int data){
    if(isFull()){
        printf("Stack overflow\n");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}

int pop(){
    if(isEmpty()){
        printf("Stack underflow\n");
        exit(1);
    }
    return stack_arr[top--];
}

int peak(){
    if(isEmpty()){
        printf("Stack underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

void print(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return;
    }
    for(int i=top;i>=0;i--){
        printf("%d ",stack_arr[i]);
    }
    printf("\n");
}

int main(){
    int choice,data;
    while(1){
        printf("\n1.push\n2.pop\n3.Peek\n4.Print\n5.Quit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter element: ");
                scanf("%d",&data);
                push(data);
                break;

            case 2:
                data=pop();
                printf("Deleted element: %d\n",data);
                break;

            case 3:
                printf("Top element: %d\n",peak());
                break;

            case 4:
                print();
                break;

            case 5:
                exit(0);

            default:
                printf("Wrong choice\n");
        }
    }
}
