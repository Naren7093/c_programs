#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
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
    temp->next=head;
    return temp;
}    

struct node*add_at_end(struct node*head,int data2){
    struct node*end=malloc(sizeof(struct node));
    if(end==NULL){
        printf("Memory allocation failed\n");
        return head;
    }
    end->data=data2;
    end->next=NULL;
    
    if(head==NULL){
        return end;
    }
    struct node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=end;
    return head;
}

struct node*add_at_pos(struct node*head,int pos1,int data3){
    struct node*pos=malloc(sizeof(struct node));
    if(pos==NULL){
        printf("Memory allocation failed\n");
        return head;
    }
    pos->data=data3;

    if(pos1==1){
        pos->next=head;
        return pos;
    }

    struct node*ptr=head;
    pos1--;

    while(pos1!=1 && ptr!=NULL){
        ptr=ptr->next;
        pos1--;
    }

    if(ptr==NULL){
        printf("Invalid position\n");
        free(pos);
        return head;
    }

    pos->next=ptr->next;
    ptr->next=pos;
    return head;
}

struct node*del_at_beg(struct node*head){
    if(head==NULL){
        printf("List is empty\n");
        return head;
    }
    struct node*beg=head;
    head=head->next;
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
        after=NULL;
    }
    return head;
}

struct node*del_at_pos(struct node*head,int pos2){
    struct node*del=head;
    struct node*prev=head;

    if(head==NULL){
        printf("List is empty\n");
        return head;
    }

    if(pos2==1){
        head=del->next;
        free(del);
        del=NULL;
        return head;
    }

    while(pos2!=1 && del!=NULL){
        prev=del;
        del=del->next;
        pos2--;
    }

    if(del==NULL){
        printf("Invalid position\n");
        return head;
    }

    prev->next=del->next;
    free(del);
    del=NULL;
    return head;
}

struct node*rev(struct node*head){
    struct node*prev=NULL;
    struct node*current=head;
    struct node*after=NULL;
    
    while(current!=NULL){
        after=current->next;
        current->next=prev;
        prev=current;
        current=after;
    }
    return prev;
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
    print_list(head,"After del at beginning\n");
    
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
