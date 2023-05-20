#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);

    int n, k;
    for (int i = 0; i < test; i++) {
        scanf("%d %d", &n, &k);

        if (n % 2 == 0) {
            printf("YES\n");
            continue;
        }

        int rem = (n-k)/2;
        if ((n-rem*2) % k == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}
