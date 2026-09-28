#include <stdio.h>
#include <string.h>

int main(void) {
	char text[1000];
	size_t start;
	size_t end;
	size_t length;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 1;
	}

	text[strcspn(text, "\n")] = '\0';
	length = strlen(text);

	printf("Substrings:\n");
	for (start = 0; start < length; start++) {
		for (end = start; end < length; end++) {
			printf("%.*s\n", (int)(end - start + 1), text + start);
		}
	}

	return 0;
}
