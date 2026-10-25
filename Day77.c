#include<stdio.h>
int main(){
    int arr[6]={10,20,30,40,50,60};
    int *ptr1=&arr[5];
    int *ptr2=&arr[2];
    printf("Value at ptr1: %d\n",*ptr1);
    printf("Value at ptr2: %d\n",*ptr2);
    printf("The difference of two pointers = %ld\n",ptr1-ptr2);
    return 0;
}
