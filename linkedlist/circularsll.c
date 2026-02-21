#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*add_to_empty(int data){
    struct node*temp=malloc(sizeof(struct node));
    if(temp==NULL){
        return NULL;
    }
    temp->data=data;
    temp->next=temp;
    return temp;
}

struct node*add_at_beg(struct node*tail,int data){
       if(tail==NULL){
        return add_to_empty(data);
    }
    struct node*new=malloc(sizeof(struct node));
    if(new==NULL){
        return tail;
    }
    new->data=data;
    new->next=tail->next;
    tail->next=new;
    return tail;
}

struct node*add_at_end(struct node*tail,int data){
     if(tail==NULL){
        return add_to_empty(data);
    }
    struct node*end=malloc(sizeof(struct node));
     if(end==NULL){
        return tail;
    }
    end->data=data;
    end->next=tail->next;
    tail->next=end;
    return end;
}

struct node*add_at_afterpos(struct node*tail,int pos,int data){
    if(tail==NULL){
        return add_to_empty(data);
    }
    struct node *p = tail->next;
    while(pos>2){
        p=p->next;
        pos--;
    }
    struct node*new=malloc(sizeof(struct node));    
     if(new==NULL){
        return tail;
    }
    new->data=data;
    new->next=p->next;
    p->next=new;
    if(p==tail){
        tail=new;
    }
    return tail;
}

struct node*del_at_beg(struct node*tail){
    if(tail==NULL){
        return tail;
    }
    if(tail->next==tail){
        free(tail);
        tail=NULL;
        return tail;
    }
    struct node*temp=tail->next;
    tail->next=temp->next;
    free(temp);
    temp=NULL;
    return tail;
}

struct node*del_at_end(struct node*tail){
    if(tail==NULL){
        return tail;
    }
    struct node*temp=tail->next;
    if(tail->next==tail){
        free(tail);
        tail=NULL;
        return tail;
    }
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=tail->next;
    free(tail);
    tail=temp;
    return tail;
}

struct node*del_at_pos(struct node*tail,int pos1){
    if(tail==NULL){
        return tail;
    }
    struct node *temp = tail->next;
    if(tail->next==tail){
        free(tail);
        tail=NULL;
        return tail;
    }
    while(pos1>2){
        temp=temp->next;
        pos1--;
    }
    struct node*temp2=temp->next;
    temp->next=temp2->next;
    if(temp2==tail){
        tail=temp;
    }
    free(temp2);
    return tail;
}

struct node*reverse_list(struct node*tail){
    if(tail==NULL){
        return tail;
    }
    if(tail->next==tail){
        return tail;
    }

    struct node*head=tail->next;
    struct node*prev=tail;
    struct node*curr=head;
    struct node*next;

    do{
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    while(curr!=head);

    tail=head;
    return tail;
}

void print_list(struct node*tail,char *msg){
     if(tail == NULL){
        printf("List empty");
        return;
    }
      printf("%s\n", msg);
      
    struct node*p=tail->next;
    do{
        printf("%d->",p->data);
        p=p->next;
    }
    while(p!=tail->next);
    printf("(head)\n");
}

int main(){
    struct node*tail;
    tail=add_to_empty(1);
    tail=add_at_beg(tail,0);
    
    tail=add_at_end(tail,2);
    tail=add_at_end(tail,4);
    
    int data,pos,n;
    printf("Enter number of nodes to add after position:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter data:");
        scanf("%d",&data);
        
        printf("Enter position:");
        scanf("%d",&pos);
    tail=add_at_afterpos(tail,pos,data);
    }
    print_list(tail, "After insertion");

    tail = del_at_beg(tail);
    print_list(tail, "After deleting first node");
    
    tail=del_at_end(tail);
    print_list(tail,"After deleting last node");
    
    int pos1;
    printf("How many nodes to be deleted:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("Enter position to delete:");
    scanf("%d",&pos1);
    tail=del_at_pos(tail,pos1);
    }
    print_list(tail,"After delete at position");

    tail=reverse_list(tail);
    print_list(tail,"After reversing");

    return 0;
}
