#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//	int i = 1;
//	do {
//			printf("%d ", i);
//			i++;
//	} while (i <= 10);
//		
//	return 0;
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//
//	do {
//			count++;
//			n = n / 10;
//	} while (n);
//	printf("%d\n", count);
//
//	return 0;
//}

//int main() {
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5)
//			continue;//continue是用于跳过本次循环的continue后边的代码，直接去判断部分，看是否进行下一次判断
//			/*break;*/
//		printf("%d ", i);
//		i = i + 1;
//	}
//
//	return 0;
//}

//int main() {
//	int i = 1;
//	while (i <= 10) {
//		i = i + 1;
//		if (i == 5)
//			continue;//continue是用于跳过本次循环的continue后边的代码，直接去判断部分，看是否进行下一次判断
//		/*break;*/
//		printf("%d ", i);
//		
//	}
//
//	return 0;
//}

//int main() {
//	int i = 1;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5)
//			/*break;*/
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main() {
//	int i = 1;
//	do {
//		if (i == 5)
//			break;
//			/*continue;*/
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}

//int main() {
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		int j;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++) 
//		{
//			if (i % j == 0) 
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}

//int main() {
//again:
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

//猜数字游戏
//游戏要求：
//1.电脑自动生成1~100的随机数
//2.玩家猜数字，猜数字的过程中，根据猜测数据的大小给出大了或小了的反馈，
//直到才对，游戏结束

#include <stdlib.h>
#include <time.h>
//int main()
//{
//	//RAND_MAX;
//	srand((unsigned int)time(NULL));
//
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//
//	return 0;
//}

//void menu()
//{
//	printf("***********************\n");
//	printf("***    1.  play     ***\n");
//	printf("***    0.  exit     ***\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	int count = 5;
//	while (count)
//	{
//		printf("你还有%d次机会\n", count);
//		printf("请输入要猜的数字：>");
//		scanf("%d", &guess);
//		if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了，数字是：%d\n", ret);
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("很遗憾，五次机会使用完，挑战失败，随机数是%d\n", ret);
//	}
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);//1 0;
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int data[10];//
//	char ch[5];
//	double arr[8];
//
//	return 0;
//}

//int main()
//{
//	int data1[10] = { 0 };//
//	int data2[10] = { 1, 2, 3, };//
//	int data3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//
//
//	char ch[5] = {'a', 'b'};
//	double arr[8] = { 1.0, 2.0 }; 
//
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 0 };
//	char arr2[5] = { 0 };
//	printf("%zd\n", sizeof(arr1));
//	printf("%zd\n", sizeof(int [10]));
//	printf("%zd\n", sizeof(arr2));
//	printf("%zd\n", sizeof(char [5]));
//
//	return 0;
//}

//int main() 
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("%d\n", arr[5]);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf( "%d ", arr[i] );
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//求数组的元素个数
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%zd\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%zd\n", sizeof(arr[0]));//计算的是数组一个元素的大小，单位是字节
//	printf("z%d\n", sizeof(arr) / sizeof(arr[0]));//计算的是数组的元素个数
//
//	return 0;
//}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}

	return 0;
}





















