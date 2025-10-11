// Function: addnode_at_end()
// If we traverse the entire list to find the last node → Time Complexit(slower) = O(n)
// But here, since we already have a pointer to the last node (ptr), 
// we directly attach the new node → Time Complexity(Faster) = O(1)

#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node*link;
};
//Inserting nodes
struct node*addnode_at_end(struct node*ptr,int data){
      struct node*temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->link=NULL;
        
        ptr->link=temp;
	return temp;
}

void count_nodes(struct node*head){
        int count=0;
        if(head==NULL)
                printf("Linked list is empty");
                        struct node*ptr=head;
                        ptr=head;
                        while(ptr!=NULL){
                                count++;
                                ptr=ptr->link;
                        }
                        printf("\ncount:%d\n",count);

}

int main(){
        struct node*head=malloc(sizeof(struct node));
        head->data=44;
        head->link=NULL;

        struct node*ptr=head;
        ptr= addnode_at_end(ptr,55);
        ptr= addnode_at_end(ptr,66);
	ptr= addnode_at_end(ptr,77);
	ptr=head;
	  while(ptr!=NULL){
                                printf("%d ",ptr->data);
                                ptr=ptr->link;
                        }
        count_nodes(head);
        return 0;
}

