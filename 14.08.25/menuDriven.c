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
struct Node* insert_at_beginning(struct Node *head,int newdata){
  struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=newdata;
  newNode->next=head;
  head->prev=newNode;
  head=newNode;
  return head;
}
void insert_at_end(struct Node *ptr,int newdata){
	 struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
	 newNode->data=newdata;
	 newNode->next=NULL;
	 ptr->next=newNode;
}
void insert_between_nodes(struct Node *head,int prevdata,int newdata){
	struct Node* temp=head;
	while(temp!=NULL && temp->data!=prevdata){
		temp=temp->next;
	}
	if(temp==NULL) {
printf("Element is not present in the list \n ");
return;
}
		struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
		newNode->data=newdata;
		newNode->next=NULL;
		struct Node*next=temp->next;
		temp->next=newNode;
		newNode->next=next;
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
			
	printf("\nInsertion Options : \n");
	printf("1.Insertion at beginning \n 2.Insertion at ending \n 3.Insertion between nodes \n4.Exit\n");
	printf("Enter your choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:
	printf("Enter the data to be inserted");
	 scanf("%d",&newdata);
  head=insert_at_beginning(dummy->next,newdata);
     listTraversal(head);
		break;
		case 2:
	printf("Enter the data to be inserted");

    scanf("%d",&newdata);
	head=dummy->next;
    while(head->next!=NULL){
	head=head->next;
}
    insert_at_end(head,newdata);
    listTraversal(dummy->next);
		break;
		case 3:	
	printf("Enter the data to be inserted");

    scanf("%d",&newdata);
printf("Enter the data after which to be inserted");
int posdata;
scanf("%d",&posdata);
insert_between_nodes(dummy->next,posdata,newdata);
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
