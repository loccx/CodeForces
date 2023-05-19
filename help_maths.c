#include <stdio.h>

int main() {
    char curr;

    int one = 0;
    int two = 0;
    int thr = 0;

    int i = 0;
    while(scanf("%c+", &curr) == 1) {
        if (curr == '1') {
            one++;
        }
        else if (curr == '2') {
            two++;
        }
        else if (curr == '3') {
            thr++;
        }
        i++;
    }

    int total = one + two + thr;

    for (int k = 0; k < one; k++) {
        printf("1");
        total--;
        if (total > 0) {
            printf("+");
        }
    }
    for (int k = 0; k < two; k++) {
        printf("2");
        total--;
        if (total > 0) {
            printf("+");
        }
    }
    for (int k = 0; k < thr; k++) {
        printf("3");
        total--;
        if (total > 0) {
            printf("+");
        }
    }
    printf("\n");
}
