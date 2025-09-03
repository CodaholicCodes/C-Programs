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
	while(temp->data!=prevdata){
		temp=temp->next;
	}
		struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
		newNode->data=newdata;
		newNode->next=NULL;
		struct Node*next=temp->next;
		temp->next=newNode;
		newNode->next=next;
}
int searchElement(struct Node *head,int element){
	struct Node*temp=head;
	while(temp!=NULL){
		if(temp->data==element)
		return 1;
		temp=temp->next;
		
	}
	return 0;
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
//	printf("Enter the data to be inserted");
//	int newdata;
//scanf("%d",&newdata);
//struct Node*head=insert_at_beginning(dummy->next,newdata);
//listTraversal(head);
//struct Node* head=dummy->next;
//while(head->next!=NULL){
//	head=head->next;
//}
//insert_at_end(head,newdata);
//printf("Enter the data after which to be inserted");
//int posdata;
//scanf("%d",&posdata);
//
//insert_between_nodes(dummy->next,posdata,newdata);
//	listTraversal(dummy->next);
int element;
printf("Enter the element to be searched");
scanf("%d",&element);
if(searchElement(dummy->next,element)==1)
printf("Element found");
else
printf("Element not found");
	return 0;
}

