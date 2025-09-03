#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};
void doubleListTraversal(struct Node *head){
	struct Node *temp=head;
	struct Node *ptr=head;
	printf("Traversal from front \n");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
		ptr=ptr->prev;
	}

struct Node* delete_at_beginning(struct Node *head){
  struct Node *dummy=(struct Node*)malloc(sizeof(struct Node));
 dummy->next=NULL;
 struct Node *next=head->next;
 dummy->next=next;
 next->prev=dummy;
 free(head);
 return dummy->next;
}
struct Node* delete_at_end(struct Node *head){
	if(head==NULL) return NULL;
	if(head->next==NULL){
		free(head);
		return NULL;
	}
		struct Node *ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
ptr->prev->next=NULL;
free(ptr);
return head;
}
void delete_between_nodes(struct Node *head,int posn){
	struct Node* curr=head->next;
	struct Node *prev=head;
	int i=1;
	while(curr!=NULL && i<posn ){
		curr=curr->next;
		prev=prev->next;
		i++;
	}
	if(curr==NULL) {
printf("Element is not present in the list \n ");
return;
}
	struct Node *next=curr->next;
	prev->next=next;
	free(curr);
}

int main(){

	int n;
	printf("Enter the number of nodes you want to keep");
	scanf("%d",&n);
	int i=0;
		struct Node *dummy=(struct Node*)malloc(sizeof(struct Node));
		dummy->next=NULL;
		struct Node *temp=dummy;
		dummy->prev=NULL;
	for(i=0;i<n;i++){
		struct Node *new=(struct Node*)malloc(sizeof(struct Node));
		int data;
		printf("Enter the data");
		scanf("%d",&data);
		new->data=data;
		new->next=NULL;
		temp->next=new;
		new->prev=temp;
		temp=temp->next;
	}
	
	doubleListTraversal(dummy->next);


int choice,newdata;
struct Node *head=dummy->next;
	do{
			
	printf("\nDeletion Options : \n");
	printf("1.Deletion at beginning \n 2.Deletion at ending \n 3.Deletion between nodes \n4.Exit\n");
	printf("Enter your choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:
     head=delete_at_beginning(dummy->next);
 	doubleListTraversal(head);
		break;
		case 2:
  head=delete_at_end(dummy->next);
 	doubleListTraversal(head);
		break;
		case 3:	
printf("Enter the pos after which to be deleted");
int posn;
scanf("%d",&posn);
delete_between_nodes(dummy->next,posn);
	doubleListTraversal(dummy->next);
		break;
		case 4:
		break;
		default:
			printf("Invalid Input");
	}
	}while(choice!=4);
	return 0;
}
