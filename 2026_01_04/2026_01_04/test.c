#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
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
//			printf("%d ", i);
//	}
//	return 0;
//}

#include <stdlib.h>
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//
//
//next:
//	printf("跳过了haha的打印\n");
//	return 0;
//}

//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//	return 0;
//}

void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;
	int count = 5;
	while (count)
	{
		printf("\n你还有%d次机会\n", count);
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("你失败了，正确值是：%d\n", r);
	}
}

void menu()
{
	printf("***********************\n");
	printf("******  1. play  ******\n");
	printf("******  0. exit  ******\n");
	printf("***********************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}