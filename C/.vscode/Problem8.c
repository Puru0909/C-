#include <stdio.h>

int main() {
    char ch;
    printf("Enter a char value: ");
    scanf(" %c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("this is a vowel.\n", ch);
        }
    else {
        printf("this is not a vowel.\n");
    }

    return 0;
}
