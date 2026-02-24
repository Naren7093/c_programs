#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*prev;
    struct node*next;
};

struct node*add_to_empty(int data){
    struct node*empty=malloc(sizeof(struct node));
    empty->data=data;
    empty->prev=empty;
    empty->next=empty;
    return empty;
}

struct node*add_at_beg(struct node*tail,int data){
    if(tail==NULL){
        return add_to_empty(data);
    }

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
    if(tail==NULL){
        return add_to_empty(data1);
    }

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

    if(temp==tail){
        tail=new;
    }

    return tail;
}

struct node*del_at_first(struct node*tail){
    if(tail==NULL){
        return tail;
    }
    
    struct node*temp=tail->next;
    if(temp==tail){
        free(tail);
        tail=NULL;
        return tail;
    }
    tail->next=temp->next;
    temp->next->prev=tail;
    free(temp);
    return tail;
}

struct node*del_at_end(struct node*tail){
    if(tail==NULL){
        return tail;
    }
    struct node*temp=tail->next;
    if(temp==tail){
        free(tail);
        tail=NULL;
        return tail;
    }
    temp=tail->prev;
    temp->next=tail->next;
    tail->next->prev=temp;
    free(tail);
    tail=temp;
    return tail;
}

struct node*del_at_pos(struct node*tail,int pos2){
    if(tail==NULL){
        return tail;
    }

    struct node*temp=tail->next;

    if(temp==tail && pos2==1){
        free(tail);
        tail=NULL;
        return tail;
    }

    while(pos2>1){
        temp=temp->next;
        pos2--;

        if(temp==tail->next){
            return tail;
        }
    }

    if(temp==tail->next){
        return del_at_first(tail);
    }

    struct node*temp2=temp->prev;

    temp2->next=temp->next;
    temp->next->prev=temp2;

    if(temp==tail){
        tail=temp2;
    }

    free(temp);
    return tail;
}

void print_list(struct node*tail,char*msg){
    printf("\n%s",msg);
    if(tail==NULL){
        return;
    }

    struct node*tmp=tail->next;

    do{
        printf("%d->",tmp->data);
        tmp=tmp->next;
    }while(tmp!=tail->next);

    printf("\n");
}

void print_rev(struct node*tail,char*msg){
    printf("\n%s",msg);

    if(tail==NULL){
        return;
    }

    struct node*tmp=tail;

    do{
        printf("%d->",tmp->data);
        tmp=tmp->prev;
    }while(tmp!=tail);

    printf("\n");
}

int main(){
    struct node*tail=NULL;

    tail=add_to_empty(1);
    tail=add_at_beg(tail,0);
    tail=add_at_end(tail,2);
    
    int pos1,data1,n;
    printf("How many nodes to add at pos:");
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
    print_list(tail,"After del at first\n");
    
    tail=del_at_end(tail);
    print_list(tail,"After del at end\n");
    
    int pos2,n1;
    printf("How many nodes to del at particular position:");
    scanf("%d",&n1);
    for(int i=1;i<=n1;i++){
        printf("Enter position:");
        scanf("%d",&pos2);
        
        tail=del_at_pos(tail,pos2);
    }
    print_list(tail,"After del at position\n");
    
    print_rev(tail,"Reverse printing\n");
}
