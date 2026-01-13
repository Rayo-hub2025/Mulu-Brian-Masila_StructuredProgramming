#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    // Input number of elements
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);

    // Input elements
    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("\nThe values store into the array are : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Display reversed array
    printf("\nThe values store into the array in reverse are : ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
