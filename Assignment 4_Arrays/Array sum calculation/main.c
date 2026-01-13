#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    // Input number of elements
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    // Input elements
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];   // Add each element to sum
    }

    // Display sum
    printf("\nSum of all elements stored in the array is : %d", sum);

    return 0;
}
