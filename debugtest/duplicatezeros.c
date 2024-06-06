#include <stdio.h>

void duplicateZeros(int* arr, int arrSize){
    for (int i = 0; i < arrSize; i++){
        if (arr[i] == 0){
            // iterate backwards from loop end to i moving elements over
            for (int j = arrSize; j > i; j--){
                arr[j] = arr[j-1];
            }
            i++;
        }
    }
}

void printArr(int* arr, int arrSize){
    for (int i = 0; i < arrSize; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}


int main(void){
    int arrSize = 8;
    int arr[] = {1,0,2,3,0,4,5,0};
    printArr(&arr[0], arrSize);
    duplicateZeros(&arr[0], arrSize);
    printArr(&arr[0], arrSize);
}