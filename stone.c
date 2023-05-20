#include <stdio.h>

int main() {
    int strLen;
    scanf("%d", &strLen);

    char currType = '\0';
    char prevType;
    scanf("%c", &currType);
    prevType = currType;

    int remove = 0;
    for (int k = 1; k < strLen; k++) {
        scanf("%c", &currType);
        if (prevType == currType) {
            remove++;
        }
        prevType = currType;
    }
    scanf("%c", &prevType);
    if (prevType == currType) {
        remove++;
    }
    printf("%d\n", remove);
}
