#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d%d", &a, &b);
//	//�ӷ�
//	//int c = a + b;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//void print(void)
//{
//	printf("hehe\n");
//}

//void print(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	print();
//	return 0;
//}

//void test(int n)
//{
//	if (n <= 0)
//		return;
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//}
//
//int main()
//{
//	test(5);
//	return 0;
//}

//int test()
//{
//	return 3.14;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//���������ж�n����������ż��
//����������1
//��ż������0

//int test(int n)
//{
//	if (n % 2 == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int ret = test(5);
//	return 0;
//}

void set_arr(int arr1[10], int sz1)
{
	int i = 0;
	for (i = 0; i < sz1; i++)
	{
		arr1[i] = -1;
	}
}

void print_arr(int arr2[10], int sz2)
{
	int i = 0;
	for (i = 0; i < sz2; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 0 };
	//дһ��������arr���������ȫ������Ϊ-1
	int sz = sizeof(arr) / sizeof(arr[0]);

	print_arr(arr, sz);

	set_arr(arr, sz);

	//дһ��������arr���������ȫ����ӡ����
	print_arr(arr,  sz);
	return 0;
}














































































































