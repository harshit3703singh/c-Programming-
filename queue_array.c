#include <stdio.h>
#include <stdlib.h>
#define size 3;
int queue[3];
int front = -1, rear = -1;
int choice;
int enqueue()
{
    int element;
    if (rear == 2)
    {
        printf("stack is full overflow condition \n");
    }
    else
    {
        printf("enter the elements in an queue \n");
        scanf("%d", &element);
        if (front == -1)
        {
            front = 0;
        }
        else
        {
            rear++;
            queue[rear] = element;
            printf("element %d has been inserted into the......... queue \n", element);
        }
    }
    return 0;
}
int dequeue()
{
    int val;
    if (front == -1 || front > rear)
    {
        printf("queue is empty underflow condition \n");
    }
    else
    {
        val = queue[front];
        front++;
        printf("the element is deleted at the position %d", front);
    }
    return 0;
}
int display()
{
    int i;
    if (front == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("elements of the queue are \n");
        for (i = front; i <= rear; i++)

        {
            printf("%d\n", queue[i]);
        }
    }
    return 0;
}
/*int enqueue();
int dequeue();
int display();*/

int main()
{

    do
    {
        printf("1 for enqueue\n2 for dequeue \n 3 for display \n4 for exit \n choose an option\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("invalid choice please try again later ");
        }
    } while (choice != 4);
    return 0;
}