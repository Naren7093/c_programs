#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*prev;
    struct node*next;
};

void print_list(struct node* head, char *msg){
    printf("\n%s\n", msg);

    struct node* ptr=head;

    if(ptr==NULL){
        printf("List is Empty\n");
        return;
    }

    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

struct node*add_at_empty(struct node*head,int data){
    struct node*temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    return temp;
}

struct node*add_at_beg(struct node*head,int data){
    struct node*tmp=malloc(sizeof(struct node));
    tmp->data=data;
    tmp->prev=NULL;
    tmp->next=head;

    if(head!=NULL)
        head->prev=tmp;

    return tmp;
}

struct node*add_at_end(struct node*head,int data){
    struct node*t1=malloc(sizeof(struct node));
    t1->data=data;
    t1->next=NULL;

    if(head==NULL){
        t1->prev=NULL;
        return t1;
    }

    struct node*tp=head;
    while(tp->next!=NULL)
        tp=tp->next;

    tp->next=t1;
    t1->prev=tp;
    return head;
}

struct node*add_at_pos(struct node*head,int data,int pos){
    if(pos==1)
        return add_at_beg(head,data);

    struct node*new=malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;

    struct node*t1=head;
    struct node*t2=NULL;

    while(pos!=2 && t1->next!=NULL){
        t1=t1->next;
        pos--;
    }

    if(t1->next==NULL){
        t1->next=new;
        new->prev=t1;
    }
    else{
        t2=t1->next;
        t1->next=new;
        t2->prev=new;
        new->prev=t1;
        new->next=t2;
    }
    return head;
}

struct node*del_at_beg(struct node*head){
    if(head==NULL)
        return NULL;

    struct node*del=head;
    head=head->next;

    if(head!=NULL)
        head->prev=NULL;

    free(del);
    return head;
}

struct node*del_at_end(struct node*head){
    if(head==NULL){
        printf("Empty list\n");
        return  head;
    }    
    else if(head->next==NULL){
        free(head);
        head=NULL;
        return head;
    }
    struct node*end1=head;
    struct node*end2=head;
    while(end1->next!=NULL){
        end2=end1;
        end1=end1->next;
    }
    end2->next=NULL;
    free(end1);
    return head;
}

struct node*del_at_pos(struct node*head,int pos1){
    if(head==NULL){
        printf("List is Empty\n");
        return head;
    }
    struct node*t1=head;
     if (pos1==1){
         head=t1->next;
         if(head!=NULL){
             head->prev=NULL;
         }
         free(t1);
         return head;
    }
    while(pos1 > 1 && t1->next!=NULL){
        t1=t1->next;
        pos1--;
    }
    if(pos1 > 1){
        printf("Invalid position\n");
        return head;
    }
    if(t1->next==NULL){
        struct node*t2=t1->prev;
        t2->next=NULL;
        free(t1);
        return head;
    }
    struct node*t2=t1->prev;
    struct node*t3=t1->next;
    t2->next=t3;
    t3->prev=t2;
    free(t1);
    return head;
}

struct node*rev(struct node*head){
    struct node* current = head;
    struct node* temp = NULL;

    while(current != NULL){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if(temp != NULL){
        head = temp->prev;
    }
    return head;
}

int main(){

    struct node*head=NULL;

    head=add_at_empty(head,1);
    print_list(head,"Initial List");

    head=add_at_beg(head,0);
    print_list(head,"After add_at_beg");

    head=add_at_end(head,2);
    head=add_at_end(head,4);
    head=add_at_end(head,5);
    print_list(head,"After add_at_end");

    int n,data,pos;

    printf("\nHow many nodes to insert at position: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter data: ");
        scanf("%d",&data);

        printf("Enter position: ");
        scanf("%d",&pos);

        head=add_at_pos(head,data,pos);
    }

    print_list(head,"After add_at_pos");
    
    head=del_at_beg(head);
    print_list(head,"After del_at_beg");
    
    head=del_at_end(head);
    print_list(head,"After del_at_end");
    
    int pos1;
    printf("Enter pos to delete:");
    scanf("%d",&pos1);
    head=del_at_pos(head,pos1);
    print_list(head,"After del_at_pos");
    
    head=rev(head);
    print_list(head,"After reverse");
    return 0;
}

