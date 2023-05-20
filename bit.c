#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int x = 0;
    char ins[4];

    for (int i = 0; i < n; i++) {
        scanf("%s", ins);
        if (strcmp(ins, "X++") == 0 || strcmp(ins, "++X") == 0) {
            x++;
        }
        else {
            x--;
        }
    }
    printf("%d\n", x);
}
