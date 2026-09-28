//Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, first = 1;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    for (i = 0; name[i] != '\0'; i++) {
        if (first && name[i] != ' ' && name[i] != '\n' && name[i] != '\t') {
            printf("%c", toupper((unsigned char)name[i]));
            first = 0;
        } else if (name[i] == ' ' || name[i] == '\t') {
            int j = i + 1;
            while (name[j] == ' ' || name[j] == '\t') {
                j++;
            }
            if (name[j] != '\n' && name[j] != '\0') {
                printf("%c", toupper((unsigned char)name[j]));
            }
            i = j - 1;
        }
    }

    printf("\n");
    return 0;
}
