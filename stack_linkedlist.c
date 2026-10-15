#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void push(int val)
{
    // create new code
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = val;
    // make a new node points to the head node
    new_node->next = head;
    // make a new node as head node
    // so that the head will always points the last inserted data
    head = new_node;
}
void pop()
{
    // temp is used to free the head node
    struct node *temp;
    if (head == NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("popped element=%d\n", head->data);
        // backup t head node
        temp = head;
        // make the head node prints to the next node
        // logically removing the node
        head = head->next;
        // free the popped element ,memory
        free(temp);
    }
}
// print the linked list
void printlist()
{
    struct node *temp = head;
    // iterate the entire linked list and print thxe data
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL \n");
}
int main()
{
    push(10);
    push(20);
    push(30);
    printf("linked list \n");
    printlist();
    pop();
    printf("after the pop the new linked list \n");
    printlist();
    pop();
    printf("after the pop the new linked list \n");
    printlist();
    pop();
   

    return 0;
}