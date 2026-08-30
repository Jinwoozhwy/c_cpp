#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//
//int main()
//{
//	printf("%c\n", '\141');
//	printf("%c\n", '\x30');
//
//
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//求一个字符串的长度
//	//int len = strlen("abc");//string length
//	////a b c \0
//	////\0是字符串的结束标志，strlen在求字符串长度的时候，统计的是\0之前字符的个数
//	//printf("%d\n", len);
//
//	int len = strlen("c:\test\bit\113.c");
//	printf("%d\n", len);
//
//	return 0;
//}


//int main()
//{
//	3 + 5;
//	int a = 10;
//	int b = 20;
//	b = a + 3;
//
//	return 0;
//}


//  /**/ 的注释方式是不支持嵌套的
//
//int main()
//{
//	/* 
//	int num = 0; 
//	//。。。
//	int a = 10;//创建一个整型变量，名字叫a，并赋值为10
//	*/
//	return 0;
//}
//

//#include <stdbool.h>
//
//int main()
//{
//	_Bool flag = false;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));//4
//	printf("%zd\n", sizeof a);//4
//
//	printf("%zd\n", sizeof(int));//4
//
//	return 0;
//}

//
//int main()
//{
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	short s = 4;
//	printf("%zd\n", sizeof(s = a + 5));//2
//	printf("s = %d\n", s);
//
//	return 0;
//}





//%d - 打印的是有符号的整数
//%u - 打印无符号整数的

//int main()
//{
//	//int a = 10;
//	signed int a = 10;
//	printf("%d\n", a);
//	a = -20;
//	printf("%d\n", a);
//	a = 0;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	unsigned int age = -20;
//	printf("%u\n", age);
//
//	return 0;
//}



//int g_val = 100;//全局变量
//
//void test()
//{
//	int n = 10;
//}
//
//int main()
//{
//	//int id = 0;//初始化
//	//int iq = 0;
//	//int price = 0;
//	//short age = 0;
//	//double weight = 0.0;
//
//	int iq;//局部变量
//	printf("%d\n", iq);
//
//	return 0;
//}
//
//int num = 1000;

//一个局部变量不初始化的，默认是随机值
//一个全局变量不初始化，默认是0
//正常情况在，变量在创建的时候，要初始化，这是一种好的习惯

//int main()
//{
//	int a;
//	printf("%d\n", a);
//	return 0;
//}

//int a = 100;
//int main()
//{
//	printf("%d\n", a);
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}


//
//int a = 100;
//
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);//10
//	}
//
//	return 0;
//}

int main()
{
	short s = 2;
	int b = 10;
	printf("%d\n", sizeof(s = b + 1));
	printf("s=%d\n", s);
	return 0;
}