#include <stdio.h>

int main() {
	printf("%d\n", 123);
	printf("%5d\n", 123);
	printf("%5d\n", 1234567);
	printf("%-5dhehe\n", 123);

	printf("%12f\n", 123.45);

	printf("%+d\n", 10); 	//显示正号
	printf("%+d\n", -10);   //显示负号

	printf("Number is %.2f\n",5.2678);
	
	printf("%6.2f\n", 123456.5);

	printf("%*.*f\n", 8, 2,0.5);

	printf("%.3s\n", "hello world");

	int year = 0;
    int month = 0;
    int day = 0;

    //scanf("%d-%d-%d", &year, &month, &day);
    //2026-08-30
    scanf("%d%*c%d%*c%d", &year, &month, &day);//2026/08/30
    printf("%d %02d %02d\n", year, month, day);//2026 08 30

	
	
	
	return 0;
}
