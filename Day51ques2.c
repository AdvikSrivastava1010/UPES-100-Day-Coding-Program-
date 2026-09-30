rint all sub-strings of a string.
Show Sample Test Cases
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
  #include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            if (str[j + 1] != '\0' || str[i + 1] != '\0')
                printf(",");
        }
    }

    return 0;
}
Sample Test Case
Input:
abc
Output:
a,ab,abc,b,bc,c
Simple logic 🧠
There are 3 loops:
1st loop (i) → chooses the starting character.
2nd loop (j) → chooses where the substring ends.
3rd loop (k) → prints the characters of that substring.
For abc:
`a → ab → abc → b →
