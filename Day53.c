#include <stdio.h>

int findPivotIndex(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    // Traverse the array to find the pivot index
    for (int i = 0; i < size; i++) {
        // Right sum is totalSum - leftSum - current element
        if (leftSum == (totalSum - leftSum - arr[i])) {
            return i; 
        }
        leftSum += arr[i];
    }

    // Return -1 if no pivot index exists
    return -1;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, n);

    printf("Pivot Index: %d\n", pivotIndex);

    return 0;
}
