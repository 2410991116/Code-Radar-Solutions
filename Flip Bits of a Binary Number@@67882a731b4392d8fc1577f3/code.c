#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    // Flip all bits using bitwise NOT
    unsigned int flipped_num = ~num;

    // Print the result
    printf("%u\n", flipped_num);

    return 0;
}