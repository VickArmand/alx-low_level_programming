#include "sort.h"
void swap(int *array,size_t index1, size_t index2)
{
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}