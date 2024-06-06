#include <stdlib.h>
#include <stdio.h>



int* shine(int* nums, int numsSize, int* returnSize){

    int* arr = malloc(sizeof(nums[0]) * numsSize);
    *returnSize = numsSize;
    for (int i = 0; i < numsSize; i++){
        arr[i] = nums[i] * nums[i];
    }
    return arr;
}

int main(void){

    int* returnSize = malloc(sizeof(int));
    int nums[5] = {-4,-1,0,3,10};
    int numsSize = 5;
    shine(nums, numsSize, returnSize);

}