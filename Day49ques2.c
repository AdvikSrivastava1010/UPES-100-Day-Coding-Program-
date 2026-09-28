//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    char *words[20];
    int count = 0, i;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\r\n")] = '\0';

    char *token = strtok(name, " \t");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " \t");
    }

    if (count == 0) {
        printf("No name entered.\n");
        return 0;
    }

    printf("Initials with surname in full: ");
    for (i = 0; i < count - 1; i++) {
        printf("%c. ", toupper((unsigned char)words[i][0]));
    }

    printf("%s\n", words[count - 1]);
    return 0;
}
