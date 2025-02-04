#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The sides %d, %d, and %d can form a triangle.\n", a, b, c);
    } else {
        printf("The sides %d, %d, and %d cannot form a triangle.\n", a, b, c);
    }

    return 0;
}