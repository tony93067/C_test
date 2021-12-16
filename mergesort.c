#include<stdio.h>
#include<stdlib.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void merge(int* num, int start, int mid, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int left = 0, right = 0;
    int *arr1 = (int*)malloc(sizeof(int)*(len1+1));
    int *arr2 = (int*)malloc(sizeof(int)*(len2+1));
    for(int i = 0, j = start; i < len1; i++, j++)
        arr1[i] = num[j];
    for(int i = 0, j = mid+1; i < len2; i++, j++)
        arr2[i] = num[j];
    arr1[len1] = 65535;
    arr2[len2] = 65535;
    for(int i = start; i <= end; i++)
    {
        if(arr1[left] < arr2[right])
        {
            num[i] = arr1[left];
            left++;
        }else
        {
            num[i] = arr2[right];
            right++;
        }

    }
}
void mergesort(int *num, int start, int end)
{
    if(start < end)
    {
        int mid = (start+end)/2;
        mergesort(num, start, mid);
        mergesort(num, mid+1, end);
        merge(num, start, mid, end);
    }
}
int main()
{
    int num[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    mergesort(num, 0, 9);
    for(int i = 0; i < 10; i++)
        printf("%d ", num[i]);
}