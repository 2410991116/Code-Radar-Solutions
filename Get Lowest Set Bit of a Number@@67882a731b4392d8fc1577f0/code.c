#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        return 0;
    }

    int position = 0; // Position of the lowest set bit
    while ((num & 1) == 0) {
        num = num >> 1;
        position++;
    }

    printf("%d\n", position);

    return 0;
}