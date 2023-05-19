#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[5][5];
    int oneC;
    int oneR;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 1) {
                oneC = i;
                oneR = j;
            }
        }
    }
    printf("%d\n", abs(oneC - 2) + abs(oneR - 2));
}
