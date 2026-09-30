Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Show Sample Test Cases
Input 1:
15/04/2025
Output 1:
15-Apr-2025
  #include <stdio.h>

int main() {
    int day, year;

    scanf("%d/04/%d", &day, &year);

    printf("%02d-Apr-%d", day, year);

    return 0;
}
