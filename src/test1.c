#include <stdio.h>


int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 3 == 0)
		printf("余数是0\n");
	else if (num % 3 == 1)
		printf("余数是1\n");
	else
		printf("余数是2\n");

	return 0;
}
