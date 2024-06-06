#include <stdlib.h>
#include <stdio.h>


void moveZeroes(int* nums, int numsSize){
    int write = 0;
    for (int read = 0; read < numsSize; read++){
        if (nums[read] != 0){
            nums[write] = nums[read];
            write++;
        }
    }
    for (int i = numsSize - 1; i >= write; i--){
        nums[i] = 0;
    }
}