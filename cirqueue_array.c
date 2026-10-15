#include <stdio.h>
#define size 5

int queue[size];
int front = -1, rear = -1;
int element;

// check full
int isfull()
{
    if ((front == rear + 1) || (front == 0 && rear == size - 1))
        return 1;
    else
        return 0;
}

// check empty
int isempty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}

// enqueue
void enqueue()
{
    if (isfull())
    {
        printf("\nQueue is full");
    }
    else
    {
        printf("\nEnter element: ");
        scanf("%d", &element);

        if (front == -1) // first element
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }

        queue[rear] = element;
        printf("\nInserted -> %d", element);
    }
}

// dequeue
void dequeue()
{
    if (isempty())
    {
        printf("\nQueue is empty");
    }
    else
    {
        element = queue[front];

        if (front == rear) // single element
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }

        printf("\nDeleted element -> %d", element);
    }
}

// traverse
void traverse()
{
    if (isempty())
    {
        printf("\nQueue is empty");
        return;
    }

    int i = front;
    printf("\nQueue elements: ");

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % size;
    }
}

// main function
int main()
{
    int choice;

    while (1)
    {
        printf("\n\n--- Circular Queue Menu ---");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
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
            traverse();
            break;

        case 4:
            return 0;

        default:
            printf("\nInvalid choice");
        }
    }

    return 0;
}