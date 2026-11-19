#include<stdio.h>
int main() {
    int a[] = {10, 20, 30, 40};
    int *p = a;
    printf("%d\n", *(p + 1));
    return 0;
}
