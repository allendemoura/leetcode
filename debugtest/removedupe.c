#include <stdlib.h>
#include <stdio.h>

int removeElement(int* nums, int numsSize){
    int read = 0, write = 0, count = 0;
    while (write < numsSize && read < numsSize - 1){
        nums[write] = nums[read];
        count++;
        while (nums[read] <= nums[write] && read < numsSize - 1) read++;
    }
    return count;
}

int main(void){
    int a[] = {0,0,1,1,1,2,2,3,3,4};
    int sizea = 10;
    removeElement(a, sizea);
}

// |1,1,2
// |    r
// |w

