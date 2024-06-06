#include <stdlib.h>
#include <stdio.h>

int removeElement(int* nums, int numsSize, int val){
    int write = 0;
    for (int read = 0; read < numsSize; read++){
        if (nums[read] != val) nums[write++] = nums[read];
    }
    return write;
}
