#include <stdio.h>
int maxsize[8];
int stack[8];
int data;
int top;
int i;
top = -1;
int iffull()
{
    if (top == maxsize)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int ifnull()
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
int push(int data)
{
    if (!iffull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("data could not be inserted stack is full overflow condition");
    }
}
int pop()
{
    if (!ifnull())
    {
        data = stack[top];
        top = top - 1;
    }
    else
    {
        printf("there are no elements in the stack under flow condition");
    }
}

void traverse()
{
    if (!ifnull())
    {
        for (i = top; i > -1; i--)
        {
            printf("%d", stack[i]);
        }
    }
}

int main()
{
    int op, data, ch;
    printf("choose an option");
    scanf("%d", &op);
    do
    {
        switch (op)
        {
        case 1:
        {
            printf("enter data");
            scanf("%d", &data);
            push(data);
            break;
        }
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        }
        printf("do you want to continue if yes press 1");
        scanf("%d", &ch);
    } while (ch == 1);

    return 0;
}