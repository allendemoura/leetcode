#include <stdlib.h>
#include <stdio.h>


bool validMountainArray(int* arr, int arrSize){
    if (arrSize < 3) return false;
    if (arr[1] <= arr[0]) return false;
    if (arrSize == 3 && arr[2] >= arr[1]) return false;

    int prev = arr[1];
    bool desc = false;
    for (int i = 2; i < arrSize; i++){
        if (arr[i] == arr[i - 1]) return false;
        if (desc && arr[i] > arr[i-1]) return false;
        if (!desc && arr[i] < arr[i-1]) desc = true;
    }
    return desc;
}