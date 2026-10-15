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
int isnull()
{
    if ()
}

int main()
{
    int op, data, ch;

    printf("Enter data: ");
    scanf("%d", &data);
    push(data);

    return 0;
}
