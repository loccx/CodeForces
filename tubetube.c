#include <stdio.h>
#include <float.h>
#include <stdlib.h>

int main() {
    int test_count;
    int vid_count;
    int lunch_time;

    double max_ent;
    int max_ent_ind;
    scanf("%d", &test_count);
    for (int k = 0; k < test_count; k++) {
        max_ent = FLT_MIN;
        max_ent_ind = -1;
        scanf("%d %d", &vid_count, &lunch_time);

        int *vid_lengths = calloc(vid_count, sizeof(int));
        int *vid_ent = calloc(vid_count, sizeof(int));

        for (int k = 0; k < vid_count; k++) {
            scanf("%d", vid_lengths+k);
        }
        for (int k = 0; k < vid_count; k++) {
            scanf("%d", vid_ent+k);
        }

        for (int k = 0; k < vid_count; k++) {
            if (vid_lengths[k] <= lunch_time && vid_ent[k] > max_ent) {
                max_ent = vid_ent[k];
                max_ent_ind = k;
            }
            lunch_time--;
        }
        if (max_ent_ind > 0) {
            max_ent_ind++;
        }
        free(vid_lengths);
        free(vid_ent);
        printf("%d\n", max_ent_ind);
    }
    return 0;
}
