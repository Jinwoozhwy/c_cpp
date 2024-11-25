
#include <stdio.h>


//int main()
//{
//	printf("%c\n", '\130'); // \130表示的是把130这个八进制数字转换成十进制后的值88，作为ASCII码值的字符
//	printf("%c\n", '\141');
//	printf("%c\n", '\x30'); 
//	return 0;
//}
// \0是字符串的结束标志
//

#include <string.h>

//int main()
//{
//	////求一个字符串的长度
//	//int len = strlen("abc"); //string length
//	////a b c \0
//	////\0是字符串的结束标志，strlen在求字符串长度的时候，统计的是\0之前字符的个数
//	//printf("%d\n", len);
//
//	int len = strlen("c:\test\bit\113.c");
//	printf("%d\n", len); //12
//
//	return 0;
//}

////空语句
//int main()
//{
//	;
//	return 0;
//}
//
////表达式语句
//int main()
//{
//	int a = 20;
//	int b = 0;
//	b = a + 5;
//
//	return 0;
//}
//
////函数调用语句
//int Add(int x, int y)
//{
//
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int ret = Add(2, 3);
//	return 0;
//}

////复合语句
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10, i++)
//	{
//		arr[i] = 10 - i;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//控制语句
//C语言是一种结构化的程序设计语言
//C语言支持三种结构：
//1. 顺序结构
//2. 选择结构
//3. 循环结构

//条件判断语句也叫分支语句： if语句、switch语句；
//循环执行语句： do while语句、while语句、 for语句；
//转向语句： break语句、 goto语句、 continue语句、return语句。


#include <stdbool.h>

//int main()
//{
//	_Bool flag = false;
//	bool flag2;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//各种数据类型的长度
//sizeof操作符

//int main()
//{
//	int a = 10;
//	printf("%zd\n",  sizeof(a));
//	printf("%zd\n",  sizeof(int));
//	return 0;
//}
//bit - 比特位
//1Byte = 8 bit
//1KB = 1024 Byte

int main()
{
	printf("%zd\n", sizeof(_Bool));//1
	printf("%zd\n", sizeof(char));//1
	printf("%zd\n", sizeof(short));//2
	printf("%zd\n", sizeof(int));//4
	printf("%zd\n", sizeof(long));//4
	printf("%zd\n", sizeof(long long));//8
	printf("%zd\n", sizeof(float));//4
	printf("%zd\n", sizeof(double));//8
	printf("%zd\n", sizeof(long double));//8

	return 0;

}
//大括号里优先局部变量














