#include <stdlib.h>
#include <stdio.h>

bool checkIfExist(int* arr, int arrSize){
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            if (arr[i] == arr[j] * 2)
            {
                return true;
            }

        }

    }
    return false;

}