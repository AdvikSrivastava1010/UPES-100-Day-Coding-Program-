#include <stdio.h>

void findPreviousGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int prev_greater = -1;

        // Look at elements to the left of the current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
                break; // Found the nearest greater element, so break
            }
        }

        // Print the output in a comma-separated fashion
        if (i == n - 1) {
            printf("%d", prev_greater);
        } else {
            printf("%d, ", prev_greater);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements: ");
    findPreviousGreater(arr, n);

    return 0;
}
