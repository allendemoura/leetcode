#include <stdlib.h>
#include <stdio.h>


int* replaceElements(int* arr, int arrSize, int* returnSize){
    *returnSize = arrSize;
    int* a = malloc(sizeof(int) * arrSize);
    int max = -1;
    for (int i = arrSize-1; i >= 0; i--){
        a[i]= max;
        if (arr[i] > max) max = arr[i];
    }
    return a;
}