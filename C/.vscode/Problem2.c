#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("The is  equilateral.\n");
    }
    else {
        printf("This triangle is not equilateral.\n");
    }

    return 0;
}
