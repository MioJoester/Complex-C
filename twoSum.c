#include <stdio.h>

int main() {
    int nums[4];  // array to hold the 4 numbers
    int target;

    // Input: 4 numbers
    for (int i = 0; i < 4; i++) {
        printf("Enter number %d:\n", i + 1);
        scanf("%d", &nums[i]);
    }

    // Input: target
    printf("Enter target addition value:\n");
    scanf("%d", &target);

    // Brute force: check all unique pairs
    int found = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i + 1, j + 1);  // using 1-based indexing
                found = 1;
                break;
            }
        }
        if (found) break;  // stop after first match
    }

    if (!found) {
        printf("Addition till target not possible with given numbers.\n");
    }

    return 0;
}
