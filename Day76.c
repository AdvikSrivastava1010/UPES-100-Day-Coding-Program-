#include<stdio.h>
int main(){
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr1 = &arr[4];
    int *ptr2 = &arr[1];
    printf("Value at ptr1: %d\n", *ptr1);
    printf("Value at ptr2: %d\n", *ptr2);
    printf("The difference of two pointers = %ld\n", ptr1 - ptr2);
    return 0;

}
