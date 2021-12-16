#include <stdio.h>
#include <stdlib.h>
int partition(int *arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    int temp;
    for(int j = start; j < end; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    i++;
    temp = arr[i];
    arr[i] = pivot;
    arr[end] = temp;
    return i;

}

void quicksort(int *arr, int start, int end)
{
    if(start < end)
    {
        int pivot_pos = partition(arr, start, end);
        quicksort(arr, start, pivot_pos-1);
        quicksort(arr, pivot_pos+1, end);
    }
}

int main(void)
{
    int num[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    quicksort(num, 0, 9);
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}