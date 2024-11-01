#include <stdio.h>

int main() {
    int year;
    printf("Enter the year value after 2000: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n");
    }
    return 0;
}
