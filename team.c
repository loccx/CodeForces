#include <stdio.h>

int main() {
    int prob;
    scanf("%d", &prob);
    prob *= 3;

    int counter = 0;
    int counter3 = 0;
    int curr;

    int probSolved = 0;

    for (int k = 0; k < prob; k++) {
        scanf("%d", &curr);
        if (curr == 1) {
            counter++;
        }
        counter3++;
        if (counter3 == 3 && counter >= 2) {
            counter3 = 0;
            counter = 0;
            probSolved++;
        }
        if (counter3 == 3) {
            counter3 = 0;
            counter = 0;
        }
    }
    printf("%d\n", probSolved);
    return 0;
}
