#include <stdio.h>

void YangHui(int arr[][4],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i-1][j-1];
            }
        }
    }
}

void print(int arr[][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[4][4] = {0};
    YangHui(arr, 4);
    print(arr, 4);
    return 0;
}