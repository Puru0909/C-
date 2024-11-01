#include<stdio.h>
int main() {
int num, count, fact = 1;
printf("enter a number to find its factorial: ");
scanf("%d", &num);
for(count = 1; count <= num; count++) {
    fact = fact * count;
}
printf("factorial of this number is  %d is %d\n", num, fact);
return 0;
}


///doubt