#include <stdio.h>

void caesarCipher(char message[], int shift) {
    int i = 0;

    while (message[i] != '\0') {
        char ch = message[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + shift) % 26 + 'A';
        }
        else if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + shift) % 26 + 'a';
        }
        printf("%c", ch);
        i++;
    }
    printf("\n");
}

