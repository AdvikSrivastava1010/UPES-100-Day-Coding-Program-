#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements:\n");
    // Brute force nested loop approach
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Check elements to the right of the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // Found the nearest greater element, break the inner loop
            }
        }

        // Print the result for the current element
        printf("%d", nextGreater);

        // Print a comma and space for all elements except the last one
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
