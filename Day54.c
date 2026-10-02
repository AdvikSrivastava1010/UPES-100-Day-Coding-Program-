#include<stdio.h>
int main(){
    int n;
    
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int total_sum = (n * (n + 1)) / 2;
    int left_sum = 0;
    int pivot = -1;
    
    for (int x = 1; x <= n; x++) {
        left_sum += x;
        
        int right_sum = total_sum - left_sum + x;
        
        if (left_sum == right_sum) {
            pivot = x;
            break;
        }
    }
    
    printf("%d\n", pivot);
    
    return 0;
}
