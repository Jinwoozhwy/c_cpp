#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include "add.h"
//µ¼Èë¾²Ì¬¿â
#pragma comment(lib, "add.lib")

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = Add(a, b);
	printf("%d\n", ret);

	return 0;
}