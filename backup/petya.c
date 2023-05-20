#include <stdio.h>
#include <string.h>

int main() {
    char word1[101];
    char word2[101];
    scanf("%s", word1);
    scanf("%s", word2);

    int result = strcasecmp(word1, word2);
    if (result < -1) {
        result = -1;
    }
    else if (result > 1) {
        result = 1;
    }
    printf("%d\n", result);
}
