#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack {
    int arr[100];
    int top;
};
void push(struct stack *s, int data) {
    s->top++;
    s->arr[s->top]=data;

}
int isEmpty(struct stack *s) {
    if(s->top==-1) return 1;
    else
    return 0;
}
int pop(struct stack *s) {
    if(isEmpty(s)) {
        printf("Stack Underflow");
      return -1;
    }
    int ele=s->arr[s->top];
    s->top--;
    return ele;
}

int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    char *postfix="231*+9-";
    int i=0;
    for(int i=0;i<strlen(postfix);i++){
        if(postfix[i]=='+' || postfix[i]=='-' || postfix[i]=='*' || postfix[i]=='/'){
            int op2=pop(s);
            int op1=pop(s);
            switch(postfix[i])
        {
            case '+':
            push(s,op1+op2);
            break;
            case '-':
            push(s,op1-op2);
            break;
            case '*':
            push(s,op1*op2);
            break;
            case '/':
            push(s,op1/op2);
            break;
        }
        }
        else{
            push(s,postfix[i]-'0');
        }
    }
    printf("Result: %d",pop(s));
    return 0;
}