#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack{
	int top;
	int size;
	char *arr;
};
int precedence(char ch){
if(ch=='*' || ch=='/')
return 2;
else if(ch == '+' || ch=='-')
    return 1;
    else
    return 0;
}
int isOperator(char ch){
if(ch=='*' || ch=='/'|| ch == '+' || ch=='-')
return 1;
else
return 0;
}
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
void push(struct stack *s,char data){

	s->top++;
	s->arr[s->top]=data;

}
char pop(struct stack *s){

    char ele=s->arr[s->top];
    s->top--;
    return ele;
}
char peek(struct stack *s){
return s->arr[s->top];
}
void printStack(struct stack *s){
	printf("\n Stack Details : \n");
	for(int i=0;i<=s->top;i++)
	printf("%d ",s->arr[i]);
}
char *infixToPostfix(char *infix){
	struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=100;
 s->arr=(char*)malloc(sizeof(char)*s->size);
	s->top=-1;
    char *postfix=(char *)malloc(sizeof(char)*(strlen(infix)+1));
    int i=0,j=0;
    while(infix[i]!='\0'){
        if(!isOperator(infix[i])){
        postfix[j]=infix[i];
        j++;
        i++;
        }
        else{
            if(precedence(peek(s))< precedence(infix[i])){
              push(s,infix[i]);
              i++;
            }
            else{
                postfix[j]=pop(s);
                j++;
            }
        }
    }
    while(!isEmpty(s)){
        postfix[j]=pop(s);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main(){
    char * infix="a-b+t/6";
    printf(" \nPostfix : %s",infixToPostfix(infix));
    return 0;
}