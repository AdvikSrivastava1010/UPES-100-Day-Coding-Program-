#include<stdio.h>
int main(){
    int a=10,b=20;
    int (*p)(int,int);
    p=add;
    int result=p(a,b);
    printf("Result: %d",result);
    return 0;
}
