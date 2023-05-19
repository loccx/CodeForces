#include <stdio.h>

int main() {
    int n;
    int k;
    scanf("%d", &n);
    scanf("%d", &k);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", nums + i);
    }

    int filter = nums[k-1];
    int inc = 0;
    int curr = nums[inc];
    int pass = 0;
    while (curr >= filter && inc < n && curr != 0) {
        pass++;
        inc++;
        curr = nums[inc];
    }
    printf("%d\n", pass);
}

