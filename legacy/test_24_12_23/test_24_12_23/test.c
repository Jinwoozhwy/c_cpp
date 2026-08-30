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


//函数要求内紧外松
//内紧：高内聚
// 在函数内 模块之间要紧密相关 形成一个高效的单元
//外松：低耦合
//完成一个功能可能需要很多模块一起完成 我们期望 这些模块与模块之间
//不要太有强关联

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


//变长数组的大小是在运行时候确定的

//int main() {
//    int n, m;
//    while (scanf("%d %d", &n, &m) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        int arr[n][m];
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                scanf("%d", &arr[i][j]);
//            }
//        }
//        //实现功能
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