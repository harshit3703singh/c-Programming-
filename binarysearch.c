#include <stdio.h>
int main()
{
    int arr[5], low, mid, high, s, i, found;
    high = 9;
    low = 0;
    printf("enter data");
    for (i = 0; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter data to be searched");
    scanf("%d", &s);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == s)
        {
            printf("data found ");
            found = 1;
            break;
        }
        else if (s > arr[mid])
        {
            low = mid + 1;
        }
        else if (s < arr[mid])
        {
            high = mid - 1;
        }
    }
    if (found != 1)
    {
        printf("data not found");
    }

    return 0;
}
