#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//例子：输入一个整数，判断是否为奇数
//int main() {
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1) {
//		printf("奇数\n");
//
//	}
//	return 0;
//}

//int main() {
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1) {
//		printf("奇数\n");
//	}
//	else {
//		printf("偶数\n");
//	}
//	return 0;
//}

//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18) {
//		printf("成年\n");
//	}
//	else {
//		printf("未成年\n");
//	}
//	return 0;
//}

//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18) {
//		printf("成年\n");
//		printf("可以谈恋爱了\n");
//	}
//	else {
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	return 0;
//}

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0) {
//		printf("输入的数字是0\n");
//	}
//	else if (num > 0) {
//		printf("输入的数字是整数\n");
//	}
//	else {
//		printf("输入的数字是负数\n");
//	}
//	return 0;
//}

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0) {
//		if (num % 2 == 0) {
//			printf("偶数\n");
//		}
//		else {
//			printf("奇数\n");
//		}
//	}
//	else {
//		printf("非正数\n");
//	}
//	return 0;
//}

//int main() {
//	int age = 0;
//	while (scanf("%d", &age) != EOF) {
//		if (age < 18) {
//			printf("少年\n");
//		}
//		else if (age <= 44) {
//			printf("青年\n");
//		}
//		else if (age < =59) {
//			printf("中老年\n");
//		}
//		else if (age <= 89) {
//			printf("中老年\n");
//		}
//		else {
//			printf("老寿星\n");
//		}
//	}
//	return 0;
//}

//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18) {
//		printf("少年\n");
//	}
//	else {
//		if (age <= 44) {
//			printf("青年\n");
//		}
//		else {
//			if (age <= 59) {
//				printf("中老年\n");
//			}
//			else {
//				if (age <= 89)
//					printf("老年\n");
//				else {
//					printf("老寿星\n");
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1) 
//		if (b == 2) 
//			printf("hehe\n");
//		
//	
//	else 
//		printf("haha\n");
//	
//	return 0;
//}
//else总是跟最接近的if匹配

//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	if (3 == a) {
//		printf("hehe\n");
//	}
//	else {
//		printf("hehe\n");
//	}
//	return 0;
//}

//条件操作符也叫三目操作符，需要接受三个操作数的，形式如下：
//exp1 ? exp2 : exp3
//exp1结果为真，执行exp2，exp2的结果是整个表达式的结果
//exp1结果为假，执行exp3，exp3的结果是整个表达式的结果

//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	if (a > 5) {
//		b = 3;
//	}
//	else{
//		b = -3;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	
//	b = (a > 5 ? 3 : -3);
//
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	printf("%d\n", m);
//	return 0;
//}

//int main() {
//	int b = 0;
//	int c = 4;
//	int  a = (a=3, a+3, b=c*3, c=2*a+b);
//	//逗号表达式，会从左向右依次计算，但是表达式的结果是最后一个表达式的结果
//	printf("%d\n", a);
//	return 0;
//}

//逻辑操作符

//int main() {
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 0) //!flag
//	{
//		printf("do some thing\n");
//	}
//
//	return 0;
//}

//int main() {
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <=5) {
//		printf("春季\n");
//	}
//
//	return 0;
//}

//int main() {
//
//	int year = 0;
//	scanf("%d", &year);
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
//		printf("闰年\n");
//	}
//	else {
//		printf("不是闰年\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0, a = 2, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0) {
//		printf("余数是0\n");
//	}
//	else if (num % 3 == 1) {
//		printf("余数是1\n");
//	}
//	else {
//		printf("余数是2\n");
//	}
//
//	return 0;
//}

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
// }

//int main() {
//	float num = 0.0;
//	scanf("%f", &num);
//	switch (num) //switch必须是整型
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
//}
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误，请输入1~7的数字\n");
//	}
//
//	return 0;
//}
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误，请输入1~7的数字\n");
//	}
//
//	return 0;
//}

//int main() {
//	int i = 1;
//	while (i <= 10) {
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	while (n) {
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main() {
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++) {
//		if(i%3==0)
//			sum = sum + i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        printf("%d ", i);
//    }
//    return 0;
//}

#include <stdio.h>

int main()
{
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    return 0;
}


















































































