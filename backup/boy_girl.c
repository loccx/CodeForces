#include <stdio.h>
#include <stdlib.h>

int main() {
    char *alph = calloc(26, sizeof(char));
    
    char let;
    while(scanf("%c", &let) == 1) {
        alph[let - 97]++;
    }

    int unique = 0;
    for (int k = 0; k < 26; k++) {
        if (alph[k] > 0) {
            unique++;
        }
    }

    if (unique % 2 == 0) {
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!\n");
    }
    free(alph);
}
