#define _CRT_SECURE_NO_WARNINGS 1

//算术操作符
// + - * / %

#include <stdio.h>

//int main()
//{
//	/*int m = 3 + 5;
//	int n = m + 2;
//
//	printf("%d\n", m);
//	printf("%d\n", n);*/
//
//	//int num = 5;
//	//printf("%d\n", num * num);
//	///*C语言中，乘法是* */
//	printf("%d\n", 6 / 3);
//	printf("%d\n", 6 / 4);
//
//	//除号的两端都是整数的时候，计算的是整数除法，结果是整除之后的商~
//	//如果希望得到浮点数的结果，两个运算数必须至少有一个浮点数，这时	C语言就会进行浮点数除法
//
//	float x = 6.0 / 4;
//	printf("%f\n", x);//1.500000
//
//	// %f是专门用来打印浮点数 - float
//	// %lf打印double类型的浮点数
//
//	return 0;
//}

//int main()
//{
//	int score = 5;
//	score = (score / 20.0) * 100;
//	printf("%d\n", score);
//
//	return 0;
//}

// % - 取模/取余 得到的是整除之后的余数
//只能用于整数运算

//int main()
//{
//	int ret = 6 % 4;
//	printf("%d\n", ret);
//
//	return 0;
//}

//负数取模的规则是，结果的正负号是由第一个运算数的正负号决定

//int main()
//{
//	//int a = 100;
//	////创建变量的同时给一个初始值，这叫初始化
//
//	//a = 200;//赋值
//
//	int a = 3;
//	int b = 5;
//	int c = 0;
//
//	c = b = a + 3;//连续赋值，从右向左依次赋值
//
//	return 0;
//}

//复合赋值
//int main()
//{
//	int a = 5;
//	printf("%d\n", a);
//
//	a +=3;//复合赋值
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	//a = a + 1;
//	//a += 1;
//	//a++;//后置++
//	//++a;//前置++
//
//	printf("%d\n", a);
//	
//	return 0;
//}

//前置++
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++
//	//a=a+1, b=a;
//	//先+1，后使用
//	
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//后置++
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++
//	//b=a, a=a+1;
//	//先使用，后+1
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//--就不难了

//强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	/*printf("there are 3 apples\n");
//	printf("there are %d apples\n", 3);
//
//	printf("zhangsan will come tonight\n");
//	printf("%s will come tonight\n", "张三");*/
//
//	printf("%s说：现在是%d点\n", "翠花", 21);
//
//
//	return 0;
//}

//printf()参数与占位符是一一对应关系，如果有n个占位符，printf()的参数
//就应该有n+1个，如果参数少于对应的占位符，printf()可能会输出内存中
// 的任意值

//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);//右对齐
//	printf("%5d\n", 12345);//右对齐
//	printf("%5d\n", 1234);//右对齐
//	printf("%5d\n", 1234567);//右对齐 超过5位 有几位打几位
//	printf("%-5dhehe\n", 123);//左对齐
//	printf("%12f\n", 123.45);//%f 默认小数点后打印6位 小数点也算一位
//	printf("%+d\n", 12);
//	printf("%+d\n", -12);
//	printf("Number is %.1f\n", 0.5);
//	printf("Number is %.2f\n", 5.2678);
//	printf("%6.2f\n", 1.5);
//	printf("%*.*f\n", 6, 2, 0.5);
//	printf("%.3s\n", "hello world");//输出部分字符串
//
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	printf("请输入成绩：");
//	scanf("%d", &score);
//	printf("成绩是： %d\n", score);
//
//	return 0;
//}

//int main()
//{
//	char arr[6] = { 0 };
//	scanf("%s", arr);//数组名本来就是地址，这里不需要取地址
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	float x = 0.0f;
//	float y = 0.0f;
//	
//	scanf("%d%d%f%f", &i, &j, &x, &y);
//	
//	printf("i = %d\n", i);
//	printf("j = %d\n", j);
//	printf("x = %f\n", x);
//	printf("y = %f\n", y);
//
//	return 0;
//}

//scanf()的返回值是一个整数，表示成功读取的变量个数。
//如果没有读取任何项，或者匹配失败，则返回0.如果在成功读取任何
//数据之前，发生了读取错误或者遇到读取到文件结尾，则返回常量EOF。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int ret = scanf("%d%d%d", &a, &b, &c);
//	printf("ret = %d\n", ret);
//	printf("a=%d, b=%d, c=%d", a, b, c);
//
//	return 0;
//}

//int main() {
//	int a = 0;
//	char ch = '0';
//	/*scanf("%d", &a);
//	printf("%d\n", a);*/
//
//	scanf("%c", &ch);
//	scanf(" %c", &ch);
//	printf("%cxxxxx\n", ch);
//	return 0;
//}

//int main() {
//	char arr1[10] = { 0 };//abc\0
//	char arr2[10] = { 0 };
//
//	scanf("%s %s", arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main() {
//	char name[11];
//	scanf("%10s", name);
//	printf("%s\n", name);
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}

int main() {
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%d%*c%d%*c%d%*c", &year, &month, &day);
	printf("%d %d %d", year, month, day);
	return 0;
}








