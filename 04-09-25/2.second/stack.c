#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *push(struct Node *head, int newdata)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newdata;
    newNode->next = head;
    return newNode;
}
struct Node *pop(struct Node *head)
{
    if (head == NULL)
    {
        printf("Stack underflow\n");
        return NULL;
    }
 
    struct Node *next = head->next;
    printf("Popped out : %d", head->data);

    free(head);
    return next;
}
void peek(struct Node *head)
{
    if(head==NULL){
    printf("Stack is Empty \n");
    return;
}
    printf("Top Element : %d\n", head->data);
}
// int isEmpty(struct Node *head){
//     return head->data==NULL;
// }
void printStack(struct Node *head)
{
    struct Node *temp = head;
    if(temp==NULL) {
        printf("Empty \n");
        return;
    }
    printf("\n Stack Details : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
   
    int choice;
    struct Node *head = NULL;
    do
    {
        printf("\nStack Operations : \n 1.Push \n 2.Pop \n 3.Peek \n 4.Exit");
        printf("Enter your choice");
        int data;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to push");
            scanf("%d", &data);
            head = push(head, data);
            printStack(head);
            /* code */
            break;
        case 2:
            head = pop(head);
            printStack(head);
            break;
        case 3:
            peek(head);
            break;
        case 4:
            break;
        default:
            printf("Invalid Input");
        }
    } while (choice != 4);
}