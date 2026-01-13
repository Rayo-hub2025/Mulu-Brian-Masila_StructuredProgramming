#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    // Input number of elements
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    // Input elements
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = arr[0];
    min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display results
    printf("\nMaximum element is : %d", max);
    printf("\nMinimum element is : %d", min);

    return 0;
}

