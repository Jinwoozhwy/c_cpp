#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 1;
//	for (i = 1; i <100; i++)
//	{
//		if (i %3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}//a>=b
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}//a>=c
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}//b>=c
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main() {
//    int i;
//    float sum = 0.0; 
//    for (i = 1; i <= 100; i++) {
//        if (i % 2 == 0) {
//            sum -= 1.0 / i; 
//        }
//        else {
//            sum += 1.0 / i; 
//        }
//    }
//    printf("%.10f\n", sum);
//    return 0;
//}

//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) { // 注意 while 处理多个 case
//        // 任意两条边之和大于第三条边
//        if ((a + b) > c && (a + c) > b && (b + c > a)) {
//            if ((a == b) && (b != c) || ((b == c) && (a != c)) || ((a == c) && (b != c))) {
//                printf("Isosceles triangle!\n");
//            }
//            else if (a == b && a == c) {
//                printf("Equilateral triangle!\n");
//            }
//            else {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}

/*int main() {
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			count += 1;
		}
		if (i / 10 == 9) {
			count += 1;
		}
	}
	printf("%d\n", count);
	return 0;
}*///包含多少个9

/*int main() {
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			count += 1;
		}
		else if (i / 10 == 9) {
			count += 1;
		}
	}
	printf("%d\n", count);
	return 0;
}*///多少个数字包含9

//int main() {
//	int year;
//	for (year = 1000; year <= 2000; year++) {
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//			printf("%d\n", year);
//		}
//	}
//
//	return 0;
//}

int main() {
	int arr[10] = { 1, 4, 6, 8, 7, 9, 0, 2, 3, 5 };
	int max = arr[0];
	for (int i = 1; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}