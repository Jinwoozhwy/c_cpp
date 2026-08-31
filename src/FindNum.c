#include <stdio.h>
#include <string.h>

// x y  是 行和列    key 是要找的数据
int FindNum(int arr[][3],int x,int y,int key)
{
    int i = 0;
    int j = y - 1;
    //判断i 和 j 是合法的 
    while (i < x && j >= 0)
    {
        if (arr[i][j] < key)
        {
            i++;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            return 1;// 有找到 
        }
    }
    return 0;//没有找到 
}

int main()
{
    
    int arr[][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int ret = FindNum(arr,3,3,15);
    if (ret == 1)
    {
        printf("找到了\n");
    }
    else
    {
        printf("没找到\n");
    }
    return 0;
}