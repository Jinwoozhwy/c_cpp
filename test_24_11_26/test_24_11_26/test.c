#define _CRT_SECURE_NO_WARNINGS 1

//����������
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
//	///*C�����У��˷���* */
//	printf("%d\n", 6 / 3);
//	printf("%d\n", 6 / 4);
//
//	//���ŵ����˶���������ʱ�򣬼�������������������������֮�����~
//	//���ϣ���õ��������Ľ������������������������һ������������ʱ	C���Ծͻ���и���������
//
//	float x = 6.0 / 4;
//	printf("%f\n", x);//1.500000
//
//	// %f��ר��������ӡ������ - float
//	// %lf��ӡdouble���͵ĸ�����
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

// % - ȡģ/ȡ�� �õ���������֮�������
//ֻ��������������

//int main()
//{
//	int ret = 6 % 4;
//	printf("%d\n", ret);
//
//	return 0;
//}

//����ȡģ�Ĺ����ǣ���������������ɵ�һ���������������ž���

//int main()
//{
//	//int a = 100;
//	////����������ͬʱ��һ����ʼֵ����г�ʼ��
//
//	//a = 200;//��ֵ
//
//	int a = 3;
//	int b = 5;
//	int c = 0;
//
//	c = b = a + 3;//������ֵ�������������θ�ֵ
//
//	return 0;
//}

//���ϸ�ֵ
//int main()
//{
//	int a = 5;
//	printf("%d\n", a);
//
//	a +=3;//���ϸ�ֵ
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	//a = a + 1;
//	//a += 1;
//	//a++;//����++
//	//++a;//ǰ��++
//
//	printf("%d\n", a);
//	
//	return 0;
//}

//ǰ��++
//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++
//	//a=a+1, b=a;
//	//��+1����ʹ��
//	
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//����++
//int main()
//{
//	int a = 10;
//	int b = a++;//����++
//	//b=a, a=a+1;
//	//��ʹ�ã���+1
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//--�Ͳ�����

//ǿ������ת��
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
//	printf("%s will come tonight\n", "����");*/
//
//	printf("%s˵��������%d��\n", "�仨", 21);
//
//
//	return 0;
//}

//printf()������ռλ����һһ��Ӧ��ϵ�������n��ռλ����printf()�Ĳ���
//��Ӧ����n+1��������������ڶ�Ӧ��ռλ����printf()���ܻ�����ڴ���
// ������ֵ

//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);//�Ҷ���
//	printf("%5d\n", 12345);//�Ҷ���
//	printf("%5d\n", 1234);//�Ҷ���
//	printf("%5d\n", 1234567);//�Ҷ��� ����5λ �м�λ��λ
//	printf("%-5dhehe\n", 123);//�����
//	printf("%12f\n", 123.45);//%f Ĭ��С������ӡ6λ С����Ҳ��һλ
//	printf("%+d\n", 12);
//	printf("%+d\n", -12);
//	printf("Number is %.1f\n", 0.5);
//	printf("Number is %.2f\n", 5.2678);
//	printf("%6.2f\n", 1.5);
//	printf("%*.*f\n", 6, 2, 0.5);
//	printf("%.3s\n", "hello world");//��������ַ���
//
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	printf("������ɼ���");
//	scanf("%d", &score);
//	printf("�ɼ��ǣ� %d\n", score);
//
//	return 0;
//}

//int main()
//{
//	char arr[6] = { 0 };
//	scanf("%s", arr);//�������������ǵ�ַ�����ﲻ��Ҫȡ��ַ
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

//scanf()�ķ���ֵ��һ����������ʾ�ɹ���ȡ�ı���������
//���û�ж�ȡ�κ������ƥ��ʧ�ܣ��򷵻�0.����ڳɹ���ȡ�κ�
//����֮ǰ�������˶�ȡ�������������ȡ���ļ���β���򷵻س���EOF��

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








