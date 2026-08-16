//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("ener any character");
    scanf("%c",&ch);
    if(isalpha(ch)){
        if (ch == 'a' || ch == 'A' || 
            ch == 'e' || ch == 'E' || 
            ch == 'i' || ch == 'I' || 
            ch == 'o' || ch == 'O' || 
            ch == 'u' || ch == 'U') {
            printf("'%c' is a VOWEL.\n", ch);
        } 
        else {
            printf("'%c' is a CONSONANT.\n", ch);
        }
    }
    else{
        printf("error:'%c'is not an alphabetical letter.\n",ch);
    }
    return 0;
}