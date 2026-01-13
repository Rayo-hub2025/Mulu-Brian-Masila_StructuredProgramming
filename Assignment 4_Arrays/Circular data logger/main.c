#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int index = 0;      // Next position to write
int count = 0;      // Number of stored samples

// Function to insert a new sample
void insertSample(int value) {
    buffer[index] = value;
    index = (index + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE) {
        count++;
    }
}

// Function to print samples in oldest → newest order
void printSamples() {
    int start;

    if (count < BUFFER_SIZE) {
        start = 0;
    } else {
        start = index;   // Oldest element
    }

    printf("Stored samples (oldest → newest): ");
    for (int i = 0; i < count; i++) {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }
    printf("\n");
}

int main() {
    int value;
    char choice;

    do {
        printf("Enter sensor value: ");
        scanf("%d", &value);

        insertSample(value);

        printf("Print buffer? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            printSamples();
        }

        printf("Continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

