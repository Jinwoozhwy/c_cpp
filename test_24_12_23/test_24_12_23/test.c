#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//    int n;
//    while (scanf("%d %d", &n) != EOF)
//    {
//        int i, j;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j || i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//����Ҫ���ڽ�����
//�ڽ������ھ�
// �ں����� ģ��֮��Ҫ������� �γ�һ����Ч�ĵ�Ԫ
//���ɣ������
//���һ�����ܿ�����Ҫ�ܶ�ģ��һ����� �������� ��Щģ����ģ��֮��
//��Ҫ̫��ǿ����

//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	printf("sum = %d\n", sum);
//
//	double avg = sum * 1.0 / 10;
//	printf("avg = %lf\n", avg);
//
//
//	return 0;
//}


//�䳤����Ĵ�С��������ʱ��ȷ����

//int main() {
//    int n, m;
//    while (scanf("%d %d", &n, &m) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        int arr[n][m];
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                scanf("%d", &arr[i][j]);
//            }
//        }
//        //ʵ�ֹ���
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                printf("%d ", arr[j][i]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main() {
//    int arr[10] = { 0 };
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

int main()
{
	int arrA[] = { 1, 2, 3, 4 };
	int arrB[] = { 5, 6, 7, 8 };
	int len = sizeof(arrA) / sizeof(arrA[0]);

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arrA[i]);
	}

	printf("\n");

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arrB[i]);
	}

	printf("\n=======");

	for (int i = 0; i < len; i++)
	{
		int tmp = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = tmp;
	}

	printf("\n");

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arrA[i]);
	}

	printf("\n");

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arrB[i]);
	}

	return 0;
}