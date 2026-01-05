#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0 };
//
//	printf("%zd\n",sizeof(arr));
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%zd\n", sizeof(arr[0]));
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//
//	return 0;
//}

#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//
//	}
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abc";//[a b c \0] 
//	//                      0 1 2
//	//
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
//		Sleep(1000);//单位是毫秒
//		system("cls");//清理屏幕上的信息
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//在数组中查找7
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是:%d", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//在数组中查找7
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
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
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}

int main()
{
	printf("%d", printf("%d", printf("%d",43)));
	return 0;
}