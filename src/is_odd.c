#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num = 0;
	//输入
	scanf("%d", &num);
	//判断
	if(num %2 == 1) {
		printf("奇数\n");
	}
	return 0;
}
