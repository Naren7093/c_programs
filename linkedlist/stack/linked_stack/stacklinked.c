#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}*top=NULL;

int isEmpty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(){
    if(isEmpty()){
        printf("Stack underflow\n");
        exit(1);
    }
    return top->data;
}

void push(int data){
    struct node*new;
    new=malloc(sizeof(new));
    
    if(new==NULL){
        printf("Stack Overflow\n");
        exit(1);
    }
    new->data=data;
    new->next=NULL;
    
    new->next=top;
    top=new;
}
int pop(){
    struct node*temp;
    temp=top;
    if(isEmpty()){
        printf("Stack underflow\n");
    }
    int val=temp->data;
    top=top->next;
    free(temp);
    temp=NULL;
    return val;
}
void print(){
    struct node*temp;
    temp=top;
    if(isEmpty()){
        printf("Stack underflow\n");
        exit(1);
    }
    printf("The stack elements are:");
    
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    int choice,data;
    while(1){
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Print the top element\n");
        printf("4.Print all the elements of the stack\n");
        printf("5.Quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        
        switch (choice){
            case 1:
            printf("Enter the element to be pushed:");
            scanf("%d",&data);
            push (data);
            break;
            
            case 2:
                data=pop();
                printf("Deleted element is %d\n",data);
                break;
                
            case 3:
                printf("The topmost element of the stack is %d\n",peek());
                break;
                
            case 4:
                print();
                break;
                
            case 5:
                exit(1);
                
            default:
                printf("Wrong choice\n");
                break;
        }
    }
    return 0;
}
