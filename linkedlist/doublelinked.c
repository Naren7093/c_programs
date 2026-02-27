#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
    struct node*prev;
};

void print_list(struct node*head,char*msg){
    printf("\n%s",msg);
    struct node*ptr=head;
    if(ptr==NULL){
        printf("List is empty\n");
        return;
    }
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
    printf("\n");
}
    
struct node*add_at_beg(struct node*head,int data1){
    struct node*temp=malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Memory allocation failed\n");
        return head;
    }
    
    temp->data=data1;
    temp->prev=NULL;
    temp->next=head;
    
    if(head!=NULL){
        head->prev=temp;
    }
    return temp;
}    

struct node*add_at_end(struct node*head,int data2){
    struct node*end=malloc(sizeof(struct node));
    if(end==NULL){
        printf("Memory allocation failed\n");
        return head;
    }
    end->data=data2;
    end->prev=NULL;
    end->next=NULL;
    
    if(head==NULL){
        return end;
    }
    struct node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=end;
    end->prev=ptr;
    return head;
}

struct node*add_at_pos(struct node*head,int pos1,int data3){
    if(pos1==1){
        return add_at_beg(head,data3);
    }

    struct node*ptr=head;
    pos1--;

    while(pos1!=1 && ptr!=NULL){
        ptr=ptr->next;
        pos1--;
    }

    if(ptr==NULL){
        printf("Invalid position\n");
        return head;
    }

    struct node*pos=malloc(sizeof(struct node));
    if(pos==NULL){
        printf("Memory allocation failed\n");
        return head;
    }

    pos->data=data3;

    if(ptr->next==NULL){
        ptr->next=pos;
        pos->prev=ptr;
        pos->next=NULL;
    }
    else{
        struct node*ptr2=ptr->next;
        ptr->next=pos;
        pos->prev=ptr;
        pos->next=ptr2;
        ptr2->prev=pos;
    }
    return head;
}

struct node*del_at_beg(struct node*head){
    if(head==NULL){
        printf("List is empty\n");
        return head;
    }
    struct node*beg=head;
    head=head->next;
    if(head!=NULL){
        head->prev=NULL;
    }
    free(beg);
    return head;
}

struct node*del_at_end(struct node*head){
    if(head==NULL){
        printf("List is empty\n");
        return head;
    }
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        struct node*prev=head;
        struct node*after=head;
    
        while(after->next!=NULL){
            prev=after;
            after=after->next;
        }
        prev->next=NULL;
        free(after);
    }
    return head;
}

struct node*del_at_pos(struct node*head,int pos2){
    if(head==NULL){
        printf("List is Empty\n");
        return head;
    }
    struct node*t1=head;
     if (pos2==1){
         head=t1->next;
         if(head!=NULL){
             head->prev=NULL;
         }
         free(t1);
         return head;
    }
    while(pos2 > 1 && t1->next!=NULL){
        t1=t1->next;
        pos2--;
    }
    if(pos2 > 1){
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

    print_list(head,"Initial list\n");
    
    int n1,data1;
    printf("How many nodes to add at beggining:");
    scanf("%d",&n1);
    for(int i=1;i<=n1;i++){
        printf("Enter data:");
        scanf("%d",&data1);
        head=add_at_beg(head,data1);
    }
    print_list(head,"After add at beggining\n");
    
    int n2,data2;
    printf("How many nodes to be add at end:");
    scanf("%d",&n2);
    for(int i=1;i<=n2;i++){
        printf("Enter data:");
        scanf("%d",&data2);
        head=add_at_end(head,data2);
    }
    print_list(head,"After add at end\n");
    
    int n3,pos1,data3;
    printf("How many nodes to be add at position:");
    scanf("%d",&n3);
    for(int i=1;i<=n3;i++){
        printf("Enter data:");
        scanf("%d",&data3);
        
        printf("Enter pos:");
        scanf("%d",&pos1);
        
        head=add_at_pos(head,pos1,data3);
    }
    print_list(head,"After add at position\n");
    
    head=del_at_beg(head);
    head=del_at_end(head);
    print_list(head,"After del at end\n");
    
    int n4,pos2;
    printf("How many nodes to delete:");
    scanf("%d",&n4);
    for(int i=1;i<=n4;i++){
        printf("Enter pos:");
        scanf("%d",&pos2);
        head=del_at_pos(head,pos2);
    }
    print_list(head,"After delete at position\n");
    
    head=rev(head);
    print_list(head,"After reverse\n");
}
