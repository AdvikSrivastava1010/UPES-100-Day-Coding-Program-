
// Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[200];
    char *word;
    char longest[200] = "";

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    word = strtok(sentence, " ");

    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    if (longest[0] != '\0')
        printf("The longest word is: %s\n", longest);
    else
        printf("No words were entered.\n");

    return 0;
}
