#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void listTraversal(struct Node *ptr){
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
struct Node* delete_at_beginning(struct Node *head){
  struct Node *dummy=(struct Node*)malloc(sizeof(struct Node));
 dummy->next=NULL;
 struct Node *next=head->next;
 dummy->next=next;
 free(head);
 return dummy->next;
}
void delete_at_end(struct Node *prev,struct Node *end){
 prev->next=NULL;
 free(end);
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
		
	for(i=0;i<n;i++){
		struct Node *new=(struct Node*)malloc(sizeof(struct Node));
		int data;
		printf("Enter the data");
		scanf("%d",&data);
		new->data=data;
		new->next=NULL;
		temp->next=new;
		temp=temp->next;
	}
	listTraversal(dummy->next);
int choice,newdata;
struct Node *head;
	do{
			
	printf("\nDeletion Options : \n");
	printf("1.Deletion at beginning \n 2.Deletion at ending \n 3.Deletion between nodes \n4.Exit\n");
	printf("Enter your choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:

  head=delete_at_beginning(dummy->next);
     listTraversal(head);
		break;
		case 2:
	head=dummy->next;
	struct Node *prev=head;
	head=head->next;
    while(head->next!=NULL){
	head=head->next;
	prev=prev->next;
}
    delete_at_end(prev,head);
    listTraversal(dummy->next);
		break;
		case 3:	
printf("Enter the pos after which to be deleted");
int posn;
scanf("%d",&posn);
delete_between_nodes(dummy->next,posn);
listTraversal(dummy->next);
		break;
		case 4:
		break;
		default:
			printf("Invalid Input");
	}
	}while(choice!=4);
	return 0;
}
