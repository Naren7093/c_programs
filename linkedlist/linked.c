#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

void print_list(struct node*head,char *msg){
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
    if(temp == NULL){
        printf("Memory allocation failed\n");
        return head;
    }
        temp->data=data1;
        temp->next=head;
        return temp;
}

struct node*add_at_end(struct node*head,int data2){
    struct node* temp = malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Memory allocation failed\n");
        return head;
    }

    temp->data = data2;
    temp->next = NULL;

    if(head == NULL) return temp;

    struct node*ptr=head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;

    return head;
}

struct node*add_at_pos(struct node*head,int pos,int data){
    struct node*new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("List is empty\n");
        return head;
    }
    new->data=data;
    if(pos==1){
        new->next=head;
        return new;
    }
    
    struct node*ptr=head;
    pos--;
    while(pos!=1){
        if(ptr==NULL){
            printf("Invalid position\n");
            free(new);
            return head;
        }
        ptr=ptr->next;
        pos--;
    }
    new->next=ptr->next;
    ptr->next=new;
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
    struct node*t1=head;
    struct node*t2=head;
    
    while(t1->next!=NULL){
        t2=t1;
        t1=t1->next;
    }
    t2->next=NULL;
    free(t1);
    t1=NULL;
    }
    return head;
}

struct node*del_at_pos(struct node*head,int pos1){
    struct node*del=head;
    struct node*prev=head;
    if(head==NULL){
        printf("List is empty\n");
        return head;
    }
    else if(pos1==1){
        head=del->next;
        free(del);
        del=NULL;
    }
    else{
        while(pos1!=1){
            prev=del;
            del=del->next;
            pos1--;
        }
        prev->next=del->next;
        free(del);
        del=NULL;
    }   
    return head;
}

struct node*rev(struct node*head){
    struct node*prev=NULL;
    struct node*current=head;
    struct node*first=NULL;
    
    while(current!=NULL){
        first=current->next;
        current->next=prev;
        prev=current;
        current=first;
    }
    return prev;
}

int main(){
    struct node*head=malloc(sizeof(struct node));
    if(head==NULL){
        printf("Memory allocation is failed\n");
        return 0;
    }
    
    head->data=1;
    head->next=NULL;
    
    struct node*ptr=head;
    print_list(head,"Initial list\n");
    
    int n,data;
    printf("How many nodes to add at beginning:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter data:");
        scanf("%d",&data);
    head=add_at_beg(head,data);
    }
    print_list(head,"After add_at_beg\n");
    
    int no,data2;
    printf("How many nodes to add at end:");
    scanf("%d",&no);
    for(int i=1;i<=no;i++){
        printf("Enter data:");
        scanf("%d",&data2);
    head=add_at_end(head,data2);
    }
    print_list(head,"After add_at_end\n");
    
    int pos,data1,np;
    printf("How many nodes to add at particular positions:");
    scanf("%d",&np);
    for(int i=1;i<=np;i++){
        printf("Enter data:");
        scanf("%d",&data1);
        
        printf("Enter position:");
        scanf("%d",&pos);
        head=add_at_pos(head,pos,data1);
    }
    print_list(head,"After add_at_pos\n");
    
    head=del_at_beg(head);
    print_list(head,"After del_at_beg\n");
    
    head=del_at_end(head);
    print_list(head,"After del_at_end\n");
    
    int pos1,n1;
    printf("How many nodes to be deleted:");
    scanf("%d",&n1);
    for(int i=1;i<=n1;i++){
        printf("Eneter pos:");
        scanf("%d",&pos1);
    head=del_at_pos(head,pos1);   
    }
    print_list(head,"After del_at_pos\n");
    
    head=rev(head);
    print_list(head,"After revlist\n");
}
