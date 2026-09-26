//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main(void) {
    char first[100], second[100];
    int frequency[256] = {0};

    printf("Enter the first string: ");
    fgets(first, sizeof(first), stdin);

    printf("Enter the second string: ");
    fgets(second, sizeof(second), stdin);

    first[strcspn(first, "\n")] = '\0';
    second[strcspn(second, "\n")] = '\0';

    for (int i = 0; first[i] != '\0'; i++)
        frequency[(unsigned char)first[i]]++;

    for (int i = 0; second[i] != '\0'; i++)
        frequency[(unsigned char)second[i]]--;

    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}
