#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//���ӣ�����һ���������ж��Ƿ�Ϊ����
//int main() {
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1) {
//		printf("����\n");
//
//	}
//	return 0;
//}

//int main() {
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1) {
//		printf("����\n");
//	}
//	else {
//		printf("ż��\n");
//	}
//	return 0;
//}

//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18) {
//		printf("����\n");
//	}
//	else {
//		printf("δ����\n");
//	}
//	return 0;
//}

//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18) {
//		printf("����\n");
//		printf("����̸������\n");
//	}
//	else {
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	return 0;
//}

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0) {
//		printf("�����������0\n");
//	}
//	else if (num > 0) {
//		printf("���������������\n");
//	}
//	else {
//		printf("����������Ǹ���\n");
//	}
//	return 0;
//}

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0) {
//		if (num % 2 == 0) {
//			printf("ż��\n");
//		}
//		else {
//			printf("����\n");
//		}
//	}
//	else {
//		printf("������\n");
//	}
//	return 0;
//}

//int main() {
//	int age = 0;
//	while (scanf("%d", &age) != EOF) {
//		if (age < 18) {
//			printf("����\n");
//		}
//		else if (age <= 44) {
//			printf("����\n");
//		}
//		else if (age < =59) {
//			printf("������\n");
//		}
//		else if (age <= 89) {
//			printf("������\n");
//		}
//		else {
//			printf("������\n");
//		}
//	}
//	return 0;
//}

//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18) {
//		printf("����\n");
//	}
//	else {
//		if (age <= 44) {
//			printf("����\n");
//		}
//		else {
//			if (age <= 59) {
//				printf("������\n");
//			}
//			else {
//				if (age <= 89)
//					printf("����\n");
//				else {
//					printf("������\n");
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
//else���Ǹ���ӽ���ifƥ��

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

//����������Ҳ����Ŀ����������Ҫ���������������ģ���ʽ���£�
//exp1 ? exp2 : exp3
//exp1���Ϊ�棬ִ��exp2��exp2�Ľ�����������ʽ�Ľ��
//exp1���Ϊ�٣�ִ��exp3��exp3�Ľ�����������ʽ�Ľ��

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
//	//���ű��ʽ��������������μ��㣬���Ǳ��ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", a);
//	return 0;
//}

//�߼�������

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
//		printf("����\n");
//	}
//
//	return 0;
//}

//int main() {
//
//	int year = 0;
//	scanf("%d", &year);
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
//		printf("����\n");
//	}
//	else {
//		printf("��������\n");
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
//		printf("������0\n");
//	}
//	else if (num % 3 == 1) {
//		printf("������1\n");
//	}
//	else {
//		printf("������2\n");
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
//		printf("������0\n");
//		break;
//	case 1:
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
//		break;
//	}
//
//	return 0;
// }

//int main() {
//	float num = 0.0;
//	scanf("%f", &num);
//	switch (num) //switch����������
//	{
//	case 0:
//		printf("������0\n");
//		break;
//	case 1:
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������������1~7������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������������1~7������\n");
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


















































































