#include<stdio.h>
#include<stdlib.h>
struct stack{
	int top;
	int size;
	int *arr;
};
int isEmpty(struct stack *s){
if(s->top==-1) return 1;
else
return 0;
}
int isFull(struct stack *s){
	if(s->top==s->size-1) return 1;
	else
	return 0;
}
void push(struct stack *s,int data){
if(isFull(s))
printf("Stack Overflow cannot push");
else{
	s->top++;
	s->arr[s->top]=data;
}
}
void pop(struct stack *s){
	if(isEmpty(s)) printf("Stack Underflow");
	else
	{
	printf("Popped Out : %d\n",s->arr[s->top]);
	s->top--;
	}
}
void peek(struct stack *s){
	if(isEmpty(s)) printf("Stack Underflow");
	else{
		printf("\nThe top Element is : %d\n",s->arr[s->top]);
	}
}
void printStack(struct stack *s){
	printf("\n Stack Details : \n");
	for(int i=0;i<=s->top;i++)
	printf("%d ",s->arr[i]);
}
int main(){
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	printf("Enter the size");
	scanf("%d",&s->size);
	s->arr=(int*)malloc(sizeof(int)*s->size);
	s->top=-1;
	int choice;
	do{
		printf("\nStack Operations : \n 1.Push \n 2.Pop \n 3.Peek \n 4.Exit");
		printf("Enter your choice");
int data;
   scanf("%d",&choice);
   switch (choice)
   {
   case 1:
   printf("Enter the data to push");
   scanf("%d",&data);
   push(s,data);
   printStack(s);
	/* code */
	break;
   case 2:
   pop(s);
   printStack(s);
   break;
   case 3:
   peek(s);
   break;
   case 4:
	break;
	default : 
	printf("Invalid Input");
   }
}while(choice!=4);
}