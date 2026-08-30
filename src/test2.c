#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n = 0;
	scanf("%d", &n);
	while (n) {
		int tmp = n % 10;
		n = n / 10;
		printf("%d ", tmp);
	}
	printf("\n");
	return 0;
}
