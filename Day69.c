#include<stdio.h>
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
    return 0;
}
