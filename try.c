#include <stdio.h>

int MAXSIZE = 3;

int stack[3];
int top = -1;

/* Check if stack is full */
int isFull()
{
    if (top == MAXSIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* Check if stack is empty */
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int data)
{
    if (!isFull())
    {
        top = top + 1;
        stack[top] = data;
        printf("Pushed: %d\n", data);
    }
    else
    {
        printf("Stack is full. OVERFLOW condition.\n");
    }
}

int pop()
{
    if (!isEmpty())
    {
        int data = stack[top];
        top = top - 1;
        printf("Popped: %d\n", data);
        return data;
    }
    else
    {
        printf("Stack is empty. UNDERFLOW condition.\n");
        return -1;
    }
}

void traverse()
{
    if (!isEmpty())
    {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Stack is empty.\n");
    }
}

int main()
{
    int op, data, ch;

    do
    {
        printf("\nChoose an option:\n");
        printf("1. Push\n2. Pop\n3. Traverse\n");
        printf("Enter option: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            pop();
            break;

        case 3:
            traverse();
            break;

        default:
            printf("Invalid option!\n");
        }

        printf("Do you want to continue? If yes press 1: ");
        scanf("%d", &ch);

    } while (ch == 1);

    return 0;
}
