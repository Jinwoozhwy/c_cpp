#include <stdio.h>
#include <string.h>

void Funcction(int *p,int len)
{
    int* left = p;
    int* right = p + len - 1;
    while (left < right)
    {
        //1 3 5  7 
        while (left < right  && *left % 2 != 0)
        {
            left++;
        }
        while (left < right && *right % 2 == 0)
        {
            right--;
        }
        int tmp = *left;
        *left = *right;
        *right = tmp;
    }
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9 };
    int len = sizeof(arr) / sizeof(arr[0]);
    Funcction(arr,len);
    for (int i = 0; i < len; i++)
    {
        //printf("%d ",arr[i]);
        printf("%d ",*(arr+i));//arr[i] == *(arr+i)
    }
    return 0;
}