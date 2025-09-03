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
void averageOfNodes(struct Node *ptr,int n){
	int sum=0;
	while(ptr!=NULL){
		sum+=ptr->data;
		ptr=ptr->next;
	}
	printf("\n Sum of the elements :%d",sum);
	float avg=sum/n;
	printf("\n Average of elements :%lf",avg);
	
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
	averageOfNodes(dummy->next,n);
	return 0;
}
