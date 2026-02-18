#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

void print_list(struct node* head, char* msg){
    printf("\n%s\n", msg);

    struct node* ptr = head;

    if(ptr == NULL){
        printf("List is Empty\n");
        return;
    }

    while(ptr != NULL){
        printf("%d->", ptr->data);
        //if(ptr->link != NULL)
          //  printf(" -> ");
        ptr = ptr->link;
    }
    printf("NULL");
    printf("\n");
}

struct node* add_at_end(struct node* ptr, int data){
    struct node* temp = malloc(sizeof(struct node));

    if(temp == NULL){
        printf("Memory allocation failed\n");
        return ptr;
    }

    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;

    return temp;
}

struct node* add_at_beg(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));

    if(temp == NULL){
        printf("Memory allocation failed\n");
        return head;
    }

    temp->data = data;
    temp->link = head;

    return temp;
}

struct node* add_at_pos(struct node* head, int data, int pos){

    struct node* newnode = malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("Memory allocation failed\n");
        return head;
    }

    newnode->data = data;

    if(pos == 1){
        newnode->link = head;
        return newnode;
    }

    struct node* ptr = head;
    pos--;

    while(pos != 1){
        if(ptr == NULL){
            printf("Invalid position\n");
            free(newnode);
            return head;
        }
        ptr = ptr->link;
        pos--;
    }

    newnode->link = ptr->link;
    ptr->link = newnode;

    return head;
}

struct node* del_beg(struct node* head){

    if(head == NULL){
        printf("List is Empty\n");
        return head;
    }

    struct node* temp = head;
    head = head->link;
    free(temp);

    return head;
}
struct node*del_at_end(struct node*head){
    if(head==NULL){
        printf("List is Empty\n");
    }
    else if(head->link==NULL){
        free(head);
        head=NULL;
    }
    else{
        struct node*t1=head;
        struct node*t2=head;
        while(t1->link!=NULL){
            t2=t1;
            t1=t1->link;
        }
        t2->link=NULL;
        free(t1);
        t1=NULL;
    }
    return head;
}

struct node*del_at_pos(struct node*head,int pos1){
    struct node*del=head;
    struct node*prev=head;
    if(head==NULL){
        printf("LIST is Empty\n");
    }
    else if(pos1==1){
        head=del->link;
        free(del);
        del=NULL;
    }
    else{
        while(pos1!=1){
            prev=del;
            del=del->link;
            pos1--;
        }
        prev->link=del->link;
        free(del);
        del=NULL;
    }
    return head;
}

struct node* reverse(struct node* head){
    struct node* prev = NULL;
    struct node* current = head;
    struct node* next = NULL;

    while(current != NULL){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int main(){

    struct node* head = malloc(sizeof(struct node));

    if(head == NULL){
        printf("Memory allocation failed\n");
        return 0;
    }

    head->data = 1;
    head->link = NULL;

    struct node* ptr = head;

    print_list(head, "Initial List:");

    ptr = add_at_end(ptr, 2);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 4);
    ptr = add_at_end(ptr, 6);

    print_list(head, "After add_at_end:");

    int n, data, pos;

    printf("\nEnter number of elements to insert at beginning: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter data: ");
        scanf("%d", &data);

        head = add_at_beg(head, data);
    }

    print_list(head, "After add_at_beg:");

    printf("\nEnter number of elements to insert at position: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nEnter data: ");
        scanf("%d", &data);

        printf("Enter position: ");
        scanf("%d", &pos);

        head = add_at_pos(head, data, pos);
    }

    print_list(head, "After add_at_pos:");

    head = del_beg(head);

    print_list(head, "After del_beg:");
    
    head=del_at_end(head);
    
    print_list(head,"After del_at_end:");
    
    int pos1;
    printf("Enter pos to delete:");
    scanf("%d",&pos1);
    
    head=del_at_pos(head,pos1);
    
    print_list(head,"After del_at_pos");
    
    head = reverse(head);
    
    print_list(head, "After reverse:");
    
    return 0;
}

