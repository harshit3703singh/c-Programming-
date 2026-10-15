#include <stdio.h>

void main() {
    int a[10], i, j, sel, swap;

    // 1. Input the unsorted array
    printf("Enter 10 unsorted elements: \n");
    for (i = 0; i <= 9; i++) {
        scanf("%d", &a[i]);
    }

    // 2. Selection Sort Logic
    // Total passes required = n - 1
    for (i = 0; i <= 8; i++) {
        sel = i; // Assume the first element of unsorted part is the smallest
        
        for (j = i + 1; j <= 9; j++) {
            if (a[j] < a[sel]) {
                sel = j; // Update index if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element
        swap = a[i];
        a[i] = a[sel];
        a[sel] = swap;
    }

    // 3. Print the sorted array
    printf("\nSorted array in ascending order: \n");
    for (i = 0; i <= 9; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}