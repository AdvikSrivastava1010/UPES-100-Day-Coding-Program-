/*Q8: Write a program to find and display the sum of the first n natural numbers.*/

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i,sum = 0;
    printf("Input = ");
    scanf("%d",&i);
    while (i>=1)
    {
        sum = sum + i;
        i--;
    }
    printf("The sum of first n natural numbers is = %d\n",sum);
    return 0;

}
