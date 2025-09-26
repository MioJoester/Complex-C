#include <stdio.h>

int main() {
    int nums[4];  
    int target;

  
    for (int i = 0; i < 4; i++) {
        printf("Enter number %d:\n", i + 1);
        scanf("%d", &nums[i]);
    }

   
    printf("Enter target addition value:\n");
    scanf("%d", &target);

 
    int found = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i + 1, j + 1); 
                found = 1;
                break;
            }
        }
        if (found) break;  
    }

    if (!found) {
        printf("Addition till target not possible with given numbers.\n");
    }

    return 0;
}
