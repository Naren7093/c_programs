#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

int count_nodes(struct node*tail){
    if(tail==NULL)
        return 0;

    int count=0;
    struct node*p=tail->next;

    do{
        count++;
        p=p->next;
    }while(p!=tail->next);

    return count;
}

void search(struct node*tail,int key){
    if(tail==NULL){
        printf("List empty\n");
        return;
    }

    struct node*p=tail->next;
    int pos=1;

    do{
        if(p->data==key){
            printf("Element %d found at position %d\n",key,pos);
            return;
        }
        p=p->next;
        pos++;
    }while(p!=tail->next);

    printf("Element not found\n");
}

struct node*add_to_empty(int data){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    return temp;
}

struct node*add_at_beg(struct node*tail,int data){
    if(tail==NULL)
        return add_to_empty(data);

    struct node*new=malloc(sizeof(struct node));
    new->data=data;
    new->next=tail->next;
    tail->next=new;

    return tail;
}

struct node*add_at_end(struct node*tail,int data){
    if(tail==NULL)
        return add_to_empty(data);

    struct node*new=malloc(sizeof(struct node));
    new->data=data;
    new->next=tail->next;
    tail->next=new;

    return new;
}

struct node*add_at_afterpos(struct node*tail,int pos,int data){
    if(tail==NULL)
        return add_to_empty(data);

    struct node*p=tail->next;

    while(pos>2){
        p=p->next;
        pos--;
    }

    struct node*new=malloc(sizeof(struct node));
    new->data=data;
    new->next=p->next;
    p->next=new;

    if(p==tail)
        tail=new;

    return tail;
}

struct node*del_at_beg(struct node*tail){
    if(tail==NULL)
        return tail;

    if(tail->next==tail){
        free(tail);
        return NULL;
    }

    struct node*temp=tail->next;
    tail->next=temp->next;

    free(temp);

    return tail;
}

struct node*del_at_end(struct node*tail){
    if(tail==NULL)
        return tail;

    if(tail->next==tail){
        free(tail);
        return NULL;
    }

    struct node*temp=tail->next;

    while(temp->next!=tail){
        temp=temp->next;
    }

    temp->next=tail->next;
    free(tail);

    tail=temp;

    return tail;
}

struct node*del_at_pos(struct node*tail,int pos){
    if(tail==NULL)
        return tail;

    struct node*temp=tail->next;

    if(tail->next==tail){
        free(tail);
        return NULL;
    }

    while(pos>2){
        temp=temp->next;
        pos--;
    }

    struct node*temp2=temp->next;

    temp->next=temp2->next;

    if(temp2==tail)
        tail=temp;

    free(temp2);

    return tail;
}

struct node*reverse_list(struct node*tail){
    if(tail==NULL || tail->next==tail)
        return tail;

    struct node*head=tail->next;
    struct node*prev=tail;
    struct node*curr=head;
    struct node*next;

    do{
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }while(curr!=head);

    tail=head;

    return tail;
}

void print_list(struct node*tail,char *msg){
    printf("\n%s\n",msg);

    if(tail==NULL){
        printf("List empty\n");
        printf("Node count: 0\n");
        return;
    }

    struct node*p=tail->next;

    do{
        printf("%d->",p->data);
        p=p->next;
    }while(p!=tail->next);

    printf("(head)\n");

    printf("Node count: %d\n",count_nodes(tail));
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

    print_list(tail,"After add at beginning");

    int n2;

    printf("How many nodes to add at end:");
    scanf("%d",&n2);

    for(int i=1;i<=n2;i++){
        printf("Enter data:");
        scanf("%d",&data);

        tail=add_at_end(tail,data);
    }

    print_list(tail,"After add at end");

    int n3,pos;

    printf("How many nodes to add after position:");
    scanf("%d",&n3);

    for(int i=1;i<=n3;i++){
        printf("Enter data:");
        scanf("%d",&data);

        printf("Enter position:");
        scanf("%d",&pos);

        tail=add_at_afterpos(tail,pos,data);
    }

    print_list(tail,"After add at position");

    tail=del_at_beg(tail);
    print_list(tail,"After delete at beginning");

    tail=del_at_end(tail);
    print_list(tail,"After delete at end");

    int n4,pos1;

    printf("How many nodes to delete:");
    scanf("%d",&n4);

    for(int i=1;i<=n4;i++){
        printf("Enter position:");
        scanf("%d",&pos1);

        tail=del_at_pos(tail,pos1);
    }

    print_list(tail,"After delete at position");

    tail=reverse_list(tail);

    print_list(tail,"After reverse");

    int key;

    printf("Enter element to search:");
    scanf("%d",&key);

    search(tail,key);

    return 0;
}
