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
//	int arr[3][5];//3��5��
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
//	//��ӡ����Ԫ��
//	int i = 0;//��
//	for (i = 0; i < 3; i++)
//	{
//		//��
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		//printf("\n"); û�����Ͳ�����
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	//����ֵ
//	int i = 0;//��
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j ++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//��ӡ����Ԫ��
//	for (i = 0; i < 3; i++)
//	{
//		//��
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
//	//��ӡ����Ԫ��
//	int i = 0;//��
//	for (i = 0; i < 5; i++)
//	{
//		//��
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
//	//������ÿ��Ԫ�صĵ�ַ��ӡ����
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
//	int arr5[] = { 0 };//1��Ԫ��
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
//��	C99�������˱䳤����ĸ����ʱ���������ʱ��
//����ʹ�ñ�����ָ����С
//�����ź�����VS��֧�ֱ䳤����
//�䳤�������˼������Ĵ�С�Ϳ���ʹ�ñ���ָ����
//��������һ�������󣬴�С���޷��ı���
//�䳤���鲻�ܳ�ʼ��
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
//		Sleep(1000);//��λ��ms
//		system("cls");//������Ļ��Ϣ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//���ֲ���
//������������в���ĳ�������Ϳ���ʹ�ö��ֲ��ң��۰���ң�
//ǰ�᣺����

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//�������в���7
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//�������в���7
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("�Ҳ�����\n");
//	return 0;
//}

#include <math.h>
int main()
{
	double ret = sqrt(100);
	printf("%lf\n", ret);
	return 0;
}







































