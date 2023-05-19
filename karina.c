#include <stdio.h>
#include <float.h>

int main() {
    int q;
    scanf("%d", &q);

    int len;
    double max;
    int max_2;
    int curr;

    while (q--) {
        scanf("%d", &len);
        scanf("%d", &curr);
        max = curr;
        for (int k = 1; k < len; k++) {
            scanf("%d", &curr);
            if (curr > max) {
                max_2 = max;
                max = curr;
            }
            else if (curr > max_2 && curr < max) {
                max_2 = curr;
            }
        }
        printf("%f\n", max*max_2);
    }
}
