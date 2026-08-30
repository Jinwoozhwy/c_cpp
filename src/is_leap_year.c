#include <stdio.h>

int main(int argc, const char *argv[])
{
	int year = 0;

	scanf("%d ", &year);
	if((year %4 == 0) && (year % 100 != 0)) {
		printf("闰年\n");
	} else if (year % 400 == 0) {
		printf("闰年\n");
	} else {	
		printf("不是闰年\n");
	}
	return 0;
}
