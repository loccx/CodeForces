#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int wordcount;
    int wordLen;
    scanf("%d", &wordcount);

    for (int i = 0; i < wordcount; i++) {
        scanf("%s", word);

        wordLen = strlen(word);
        if (wordLen > 10) {
            printf("%c%d%c\n", word[0], wordLen-2, word[wordLen-1]);
        }
        else {
            printf("%s\n", word);
        }
    }
    return 0;
}
