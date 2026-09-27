// Reverse each word in a sentence without changing the word order.
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void reverse_range(char *start, char *end) {
	while (start < end) {
		char temporary = *start;
		*start = *end;
		*end = temporary;
		start++;
		end--;
	}
}

int main(void) {
	char sentence[200];
	char *word_start = sentence;

	printf("Enter a sentence: ");
	fgets(sentence, sizeof(sentence), stdin);
	sentence[strcspn(sentence, "\n")] = '\0';

	for (char *current = sentence;; current++) {
		if (*current == '\0' || isspace((unsigned char)*current)) {
			if (word_start < current)
				reverse_range(word_start, current - 1);

			if (*current == '\0')
				break;

			word_start = current + 1;
		}
	}

	printf("Reversed words: %s\n", sentence);
	return 0;
}
