#include <stdio.h>

int main() {
    char letter;
    char rest[1000];
    scanf("%c", &letter);
    fgets(rest, 1000, stdin);

    if (letter > 90) {
        printf("%c%s", letter - 32, rest);
    }
    else {
        printf("%c%s", letter, rest);
    }
}
