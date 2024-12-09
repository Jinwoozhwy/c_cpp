#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}

//int main()
//{
//	int arr[3][5];//3行5列
//	double data[2][8];
//
//	return 0;
// }

//int main() {
//	/*int data[3][5] = { 1, 2, 3 };*/
//	int data[3][5] = { {1,2},{3,4},{5,6} };
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5,  2, 3, 4, 5, 6,  3, 4, 5, 6, 7 };
//	//打印所有元素
//	int i = 0;//行
//	for (i = 0; i < 3; i++)
//	{
//		//列
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		//printf("\n"); 没有这句就不分行
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	//输入值
//	int i = 0;//行
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j ++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//打印所有元素
//	for (i = 0; i < 3; i++)
//	{
//		//列
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n"); 
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7 };
//	//打印所有元素
//	int i = 0;//列
//	for (i = 0; i < 5; i++)
//	{
//		//行
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	//把数组每个元素的地址打印出来
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d[%d]%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[5];
//	int arr2[3 + 5];
//	int arr3[8];
//	int arr4[] = { 1, 2, 3, 4 };
//	int arr5[] = { 0 };//1个元素
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//在	C99中引入了变长数组的概念，这时创建数组的时候
//可以使用变量来指定大小
//但是遗憾的是VS不支持变长数组
//变长数组的意思是数组的大小就可以使用变量指定，
//但是数组一旦创建后，大小就无法改变了
//变长数组不能初始化
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "********************";
//	
//	int left = 0;
//	int right = strlen(arr1)-1;
//	
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是ms
//		system("cls");//清理屏幕信息
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//二分查找
//在有序的数据中查找某个数，就可以使用二分查找（折半查找）
//前提：有序

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//在数组中查找7
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//在数组中查找7
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			flag = 1;
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到了\n");
//	return 0;
//}

#include <math.h>
int main()
{
	double ret = sqrt(100);
	printf("%lf\n", ret);
	return 0;
}







































