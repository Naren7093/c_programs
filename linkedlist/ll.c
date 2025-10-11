#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*link;
};
//Inserting node 
void addnode_at_end(struct node*head,int data){
	struct node*ptr,*temp;
	ptr=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	ptr->link=temp;
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
			printf("count:%d\n",count);
			
}

void print_data(struct node*head){
	if(head==NULL)
		printf("Linked list is empty");
			struct node*ptr=head;
	                ptr=head;
			while(ptr!=NULL){
				printf("%d ",ptr->data);
				ptr=ptr->link;
			}
printf("\n");
}

int main(){
	struct node*head=malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;

	struct node*current=malloc(sizeof(struct node));
	current->data=55;
	current->link=NULL;
	head->link=current;

	current=malloc(sizeof(struct node));
	current->data=66;
	current->link=NULL;
	head->link->link=current;

	//Inserting node at end
        addnode_at_end(head,77);
        
	count_nodes(head);
	print_data(head);

	return 0;
}
