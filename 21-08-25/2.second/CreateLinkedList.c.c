#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};
void doubleListTraversal(struct Node *head){
	struct Node *temp=head;
	struct Node *ptr=head;
	printf("Traversal from front \n");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf(" \nTraversal from back \n");
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	while(ptr->prev!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->prev;
	}
}
 


int main(){

	int n;
	printf("Enter the number of nodes you want to keep");
	scanf("%d",&n);
	int i=0;
		struct Node *dummy=(struct Node*)malloc(sizeof(struct Node));
		dummy->next=NULL;
		dummy->	prev=NULL;
		struct Node *temp=dummy;
		
	for(i=0;i<n;i++){
		struct Node *new=(struct Node*)malloc(sizeof(struct Node));
		int data;
		printf("Enter the data");
		scanf("%d",&data);
	  new->data=data;
	  new->prev=temp;
	  temp->next=new;
	  temp=temp->next;
	}
	doubleListTraversal(dummy->next);
}

