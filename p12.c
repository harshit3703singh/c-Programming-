#include <stdio.h>

int main() {
    int n, i, j, key;
    
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Insertion Sort
    for(i = 1; i < n; i++) {
        key = arr[i];  // Take current number
        j = i - 1;     // Check left side
        
        // Shift bigger numbers right
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        // Place key in correct position
        arr[j + 1] = key;
        
        printf("\nPass %d: ", i);
        for(int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
    }
    
    printf("\nSorted: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}