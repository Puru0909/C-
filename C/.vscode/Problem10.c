#include <stdio.h>

int main() {
    int n, digit, sum = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        count++;
        n /= 10;
    }

    printf("Count of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
