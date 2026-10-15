#include <stdio.h>
int main()
{
    int arr[100], s, found = 0, n, i;
    printf("enter the size of an array");
    scanf("%d", &n);
    printf("enter the elements of an array");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter data to be searched");
    scanf("%d", &s);
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == s)
        {
            found = 1;
            printf("the searched data is given at a position -- \n %d", i);
        }
    }
    if (found != 1)
    {
        printf("data not found");
    }
    return 0;
}