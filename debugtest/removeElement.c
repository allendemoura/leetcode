#include <stdlib.h>
#include <stdio.h>

int removeElement(int* nums, int numsSize, int val){
    // int k = numsSize;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] == val){
            numsSize--;
            for (int j = i; j < numsSize; j++){
                nums[j] = nums[j + 1];
            }
            i--;
        }
    }
    return numsSize;
}

int main(void){
    int a[] = {0,1,2,2,3,0,4,2};
    int sizea = 8;
    int val = 2;
    removeElement(a, sizea, val);
}

// 0,1,2,2,3,0,4,2
//               i
//             k