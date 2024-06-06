#include <stdlib.h>
#include <stdio.h>


int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int left = 0, right = numsSize - 1;
    while (left != right && left < right){
        if (nums[right] % 2 == 1){
            right--;
        }else{
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
            // increment
            left++;
        }
        if (nums[left] % 2 == 0){
            left++;
        }else{
            //  swap
            int tmp = nums[right];
            nums[right] = nums[left];
            nums[left] = tmp;
            // decrement
            right--;
        }
    }
    return nums;
}