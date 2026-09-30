Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
Show Sample Test Cases
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2
Explanation 1:
Smallest number greater than 5 is 8, whose index is 2.
Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1
Explanation 2:
No element greater than 20 is found. So output is -1.
Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0
Explanation 3:
Smallest number greater than 0 is 1, whose indices are 0 and 1. The index of the first occurrence is 0.
Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2
Explanation 4:
If x is directly present, return the index of its first occurrence. 
  #include <stdio.h>

int main() {
    int arr[100], n, x;
    int low = 0, high, ans = -1, mid;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;   // search for earlier occurrence
        } else {
            low = mid + 1;
        }
    }

    printf("%d", ans);

    return 0;
}
