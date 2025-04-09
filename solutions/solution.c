#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

bool containsDuplicate(int *nums, int numsSize) {
    if (numsSize < 2) return false;

    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    // Check for consecutive duplicates
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }

    return false;
}
