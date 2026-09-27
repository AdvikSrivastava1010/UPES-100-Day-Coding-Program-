// Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main(void) {
	char first[100], second[100], doubled[200];

	printf("Enter the first string: ");
	fgets(first, sizeof(first), stdin);

	printf("Enter the second string: ");
	fgets(second, sizeof(second), stdin);

	first[strcspn(first, "\n")] = '\0';
	second[strcspn(second, "\n")] = '\0';

	if (strlen(first) != strlen(second)) {
		printf("The strings are not rotations of each other.\n");
		return 0;
	}

	snprintf(doubled, sizeof(doubled), "%s%s", first, first);

	if (strstr(doubled, second) != NULL)
		printf("The second string is a rotation of the first.\n");
	else
		printf("The strings are not rotations of each other.\n");

	return 0;
}
