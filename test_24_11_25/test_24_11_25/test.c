
#include <stdio.h>


//int main()
//{
//	printf("%c\n", '\130'); // \130��ʾ���ǰ�130����˽�������ת����ʮ���ƺ��ֵ88����ΪASCII��ֵ���ַ�
//	printf("%c\n", '\141');
//	printf("%c\n", '\x30'); 
//	return 0;
//}
// \0���ַ����Ľ�����־
//

#include <string.h>

//int main()
//{
//	////��һ���ַ����ĳ���
//	//int len = strlen("abc"); //string length
//	////a b c \0
//	////\0���ַ����Ľ�����־��strlen�����ַ������ȵ�ʱ��ͳ�Ƶ���\0֮ǰ�ַ��ĸ���
//	//printf("%d\n", len);
//
//	int len = strlen("c:\test\bit\113.c");
//	printf("%d\n", len); //12
//
//	return 0;
//}

////�����
//int main()
//{
//	;
//	return 0;
//}
//
////���ʽ���
//int main()
//{
//	int a = 20;
//	int b = 0;
//	b = a + 5;
//
//	return 0;
//}
//
////�����������
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

////�������
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

//�������
//C������һ�ֽṹ���ĳ����������
//C����֧�����ֽṹ��
//1. ˳��ṹ
//2. ѡ��ṹ
//3. ѭ���ṹ

//�����ж����Ҳ�з�֧��䣺 if��䡢switch��䣻
//ѭ��ִ����䣺 do while��䡢while��䡢 for��䣻
//ת����䣺 break��䡢 goto��䡢 continue��䡢return��䡣


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

//�����������͵ĳ���
//sizeof������

//int main()
//{
//	int a = 10;
//	printf("%zd\n",  sizeof(a));
//	printf("%zd\n",  sizeof(int));
//	return 0;
//}
//bit - ����λ
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
//�����������Ⱦֲ�����














