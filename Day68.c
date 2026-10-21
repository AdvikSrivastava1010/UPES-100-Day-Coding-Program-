#include <stdio.h>
#include <stdlib.h>

void printFirstNegative(int arr[], int n, int k) {
    // Array to act as a queue to store indices of negative elements
    int* negativeIndices = (int*)malloc(n * sizeof(int));
    int head = 0, tail = 0;

    // Process the first window of size k
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            negativeIndices[tail++] = i;
        }
    }

    // Process the rest of the elements
    for (int i = k; i <= n; i++) {
        // 1. Print the first negative element of the previous window
        if (head < tail) {
            printf("%d ", arr[negativeIndices[head]]);
        } else {
            printf("0 ");
        }

        // Break if we have processed all windows (handled the last window print above)
        if (i == n) break;

        // 2. Remove elements that are out of the current window
        while (head < tail && negativeIndices[head] < (i - k + 1)) {
            head++;
        }

        // 3. Add the current element if it is negative
        if (arr[i] < 0) {
            negativeIndices[tail++] = i;
        }
    }
    printf("\n");
    
    free(negativeIndices);
}

int main() {
    int n, k;

    // Take the total size of the array
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1) return 1;

    int* arr = (int*)malloc(n * sizeof(int));
    
    // Take the array elements as input
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    
    printf("Enter the window size k: ");
    if (scanf("%d", &k) != 1) return 1;

    // Edge case handling
    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        free(arr);
        return 1;
    }

    // Find and print results
    printFirstNegative(arr, n, k);

    free(arr);
    return 0;
}
