#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*prev;
    struct node*next;
};

int count_nodes(struct node*tail){
    if(tail==NULL)
        return 0;

    int count=0;
    struct node*temp=tail->next;

    do{
        count++;
        temp=temp->next;
    }while(temp!=tail->next);

    return count;
}

void search(struct node*tail,int key){
    if(tail==NULL){
        printf("List empty\n");
        return;
    }

    struct node*temp=tail->next;
    int pos=1;

    do{
        if(temp->data==key){
            printf("Element %d found at position %d\n",key,pos);
            return;
        }

        temp=temp->next;
        pos++;

    }while(temp!=tail->next);

    printf("Element not found\n");
}

struct node*add_to_empty(int data){
    struct node*empty=malloc(sizeof(struct node));

    empty->data=data;
    empty->prev=empty;
    empty->next=empty;

    return empty;
}

struct node*add_at_beg(struct node*tail,int data){

    if(tail==NULL)
        return add_to_empty(data);

    struct node*new=malloc(sizeof(struct node));
    new->data=data;

    struct node*temp=tail->next;

    new->prev=tail;
    new->next=temp;

    temp->prev=new;
    tail->next=new;

    return tail;
}

struct node*add_at_end(struct node*tail,int data){

    struct node*new=malloc(sizeof(struct node));
    new->data=data;

    if(tail==NULL){
        new->prev=new;
        new->next=new;
        return new;
    }

    struct node*temp=tail->next;

    new->next=temp;
    new->prev=tail;

    tail->next=new;
    temp->prev=new;

    tail=new;

    return tail;
}

struct node*add_at_pos(struct node*tail,int pos1,int data1){

    if(tail==NULL)
        return add_to_empty(data1);

    if(pos1==1){

        struct node*new=malloc(sizeof(struct node));
        new->data=data1;

        struct node*head=tail->next;

        new->prev=tail;
        new->next=head;

        head->prev=new;
        tail->next=new;

        return tail;
    }

    struct node*temp=tail->next;
    int i=1;

    while(i<pos1-1 && temp!=tail){
        temp=temp->next;
        i++;
    }

    struct node*new=malloc(sizeof(struct node));
    new->data=data1;

    new->prev=temp;
    new->next=temp->next;

    temp->next->prev=new;
    temp->next=new;

    if(temp==tail)
        tail=new;

    return tail;
}

struct node*del_at_first(struct node*tail){

    if(tail==NULL)
        return tail;

    struct node*temp=tail->next;

    if(temp==tail){
        free(tail);
        return NULL;
    }

    tail->next=temp->next;
    temp->next->prev=tail;

    free(temp);

    return tail;
}

struct node*del_at_end(struct node*tail){

    if(tail==NULL)
        return tail;

    struct node*temp=tail->next;

    if(temp==tail){
        free(tail);
        return NULL;
    }

    temp=tail->prev;

    temp->next=tail->next;
    tail->next->prev=temp;

    free(tail);

    tail=temp;

    return tail;
}

struct node*del_at_pos(struct node*tail,int pos2){

    if(tail==NULL)
        return tail;

    struct node*temp=tail->next;

    if(temp==tail && pos2==1){
        free(tail);
        return NULL;
    }

    while(pos2>1){
        temp=temp->next;
        pos2--;

        if(temp==tail->next)
            return tail;
    }

    if(temp==tail->next)
        return del_at_first(tail);

    struct node*temp2=temp->prev;

    temp2->next=temp->next;
    temp->next->prev=temp2;

    if(temp==tail)
        tail=temp2;

    free(temp);

    return tail;
}

void print_list(struct node*tail,char*msg){

    printf("\n%s",msg);

    if(tail==NULL){
        printf("List empty\n");
        printf("Node count: 0\n");
        return;
    }

    struct node*tmp=tail->next;

    do{
        printf("%d->",tmp->data);
        tmp=tmp->next;
    }while(tmp!=tail->next);

    printf("\n");

    printf("Node count: %d\n",count_nodes(tail));
}

void print_rev(struct node*tail,char*msg){

    printf("\n%s",msg);

    if(tail==NULL)
        return;

    struct node*tmp=tail;

    do{
        printf("%d->",tmp->data);
        tmp=tmp->prev;
    }while(tmp!=tail);

    printf("\n");
}

int main(){

    struct node*tail=NULL;

    int n1,data;

    printf("How many nodes to add at beginning:");
    scanf("%d",&n1);

    for(int i=1;i<=n1;i++){
        printf("Enter data:");
        scanf("%d",&data);

        tail=add_at_beg(tail,data);
    }

    print_list(tail,"After add at beginning\n");

    int n2;

    printf("How many nodes to add at end:");
    scanf("%d",&n2);

    for(int i=1;i<=n2;i++){
        printf("Enter data:");
        scanf("%d",&data);

        tail=add_at_end(tail,data);
    }

    print_list(tail,"After add at end\n");

    int pos1,data1,n;

    printf("How many nodes to add at position:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        printf("Enter data:");
        scanf("%d",&data1);

        printf("Enter pos:");
        scanf("%d",&pos1);

        tail=add_at_pos(tail,pos1,data1);
    }

    print_list(tail,"After add at position\n");

    tail=del_at_first(tail);
    print_list(tail,"After delete at first\n");

    tail=del_at_end(tail);
    print_list(tail,"After delete at end\n");

    int pos2,n3;

    printf("How many nodes to delete:");
    scanf("%d",&n3);

    for(int i=1;i<=n3;i++){

        printf("Enter position:");
        scanf("%d",&pos2);

        tail=del_at_pos(tail,pos2);
    }

    print_list(tail,"After delete at position\n");

    print_rev(tail,"Reverse printing\n");

    int key;

    printf("Enter element to search:");
    scanf("%d",&key);

    search(tail,key);

    return 0;
}
