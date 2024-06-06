#include <stdlib.h>
#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    for (int i = 0, j = 0; j < nums2Size; j++){
        while (nums1[i] < nums2[j] && i < m + j) i++;
        for (int k = m + j; k > i; k--){
            nums1[k] = nums1[k-1];
        }
        nums1[i] = nums2[j];
    }

}
int main(void){
int a[] = {4,5,6,0,0,0};
int sizea = 6;
int m = 3;
int b[] = {1,2,3};
int sizeb = 3;
int n = 3;
merge(a, sizea, m, b, sizeb, n);
}