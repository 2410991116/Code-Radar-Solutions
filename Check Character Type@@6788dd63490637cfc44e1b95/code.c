#include <stdio.h>

int main() {
    char c = 'A';

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } else if (c >= '0' && c <= '9') {
        printf("Digit");
    } else {
        printf("Special Character");
    }

    return 0;
}