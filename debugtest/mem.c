#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>


int main(void){
    int arr1[10];
    int size = get_int("Size: ");
    int arr2[size];
    arr2[0] = 1;
    arr2[size - 1] = 999;
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", arr2[i]);
    }

}