#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL, *rear = NULL;
int enqueue(int val)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

    return 0;
}
int dequeue()
{
    struct node *temp;
    if (front == NULL)
    {
        printf("queue is empty underflow condition");
    }
    else
    {
        temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
            free(temp);
        }
    }
    return 0;
}
int printlist()
{
    struct node *temp;
    temp = front;
    while (temp)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("null");
    return 0;
}

int main()
{
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("the queue is \n");
    printlist();
    dequeue();
    printf("\n the queue after dequeue is \n");
    printlist();

    return 0;
}