//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    float a,b;
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("sum is %f\n",a+b);
    printf("diff is %f\n",a-b);
    printf("product is %f\n",a*b);
    printf("quotient is %f\n",a/b);
    return 0;

}