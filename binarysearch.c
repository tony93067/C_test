#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int binary_search(int *num, int start, int end, int sear)
{
    printf("start %d end %d\n", start, end);
    if(start <= end)
    {
        int mid = (start + end) / 2;
        if(sear == num[mid])
        {
            return mid;
        }
        if(sear > num[mid])
        {
            return binary_search(num, mid + 1, end, sear);
        }
        if(sear < num[mid])
        {
            return binary_search(num, start, mid -1, sear);
        }
    }
}
int var_binarysearch(int *num, int start,int end, int sear)
{
    if(start < end)
    {
        int mid = (start + end)/2;
        if(num[mid] == sear)
        {
            return var_binarysearch(num, start, mid-1, sear);
        }
        if(num[mid] != sear)
        {
            return var_binarysearch(num, mid + 1, end, sear);
        }
    }
    return start;
}
int hcf(int a, int b)
{
    if(b != 0)
    {
        return  hcf(b, a%b);
    }
    return a;
}
int main(void)
{
    // int num[768] = {0};
    // for(int i = 0; i < 100; i++)
    // {
    //     num[i] = 1;
    // }
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search_num  = 5;
    int front = 0, end = 9;
    int mid;
    while(front <= end)
    {
        mid = (front+end)/2;
        if(arr[mid] == search_num)
        {
            printf("searched index %d\n", mid);
            break;
        }else if(search_num > arr[mid])
        {
            front = mid+1;
        }else if(search_num < arr[mid])
        {
            end = mid-1;
        }
    }
    // int index = binary_search(arr, 0, 9, 7);
    // printf("index %d\n", index);
    // printf("hcf %d\n", hcf(100, 20));
    // printf("var index %d\n", var_binarysearch(num, 0, 767, 0));

}