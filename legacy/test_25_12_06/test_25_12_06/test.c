#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//int binarySearch(int arr[], int len, int key) {
//	int left = 0;
//	int right = len - 1;
//	while (left <= right) {
//		int mid = left + ((right - left) >> 1);
//		if (arr[mid] < key) {
//			left = mid + 1;
//		}
//		else if (arr[mid] == key) {
//			return mid;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	int arr[] = {1, 2, 3, 4, 5, 6, 7};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = binarySearch(arr, len, 6);
//	if (ret != -1) {
//		printf("找到了该数据：%d\n",arr[ret]);
//		printf("其下标是：%d\n", ret);
//	}
//	return 0;
//}

//bool is_prime(int n) 
//{
//    if (n < 2) {
//        return false;
//    }
//    if (n == 2) {
//        return true;
//    }
//    if (n % 2 == 0) {  // 排除掉所有偶数
//        return false;
//    }
//
//    // 只需要判断到 sqrt(n)，等价于 i * i <= n
//    for (int i = 3; i * i <= n; i += 2) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}

//bool is_prime() {
//	for (int i = 1000; i <= 2000; i++) {
//		int flag = 1;
//		for (int j = 2; j < i; j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)  {
//			printf("%d ", i);
//		}
//	}
//}
//
//int main() {
//	is_prime();
//	return 0;
//}


//void multiple(int n) {
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%-d * %-d = %-d\t", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	multiple(n);
//	return 0;
//}

//void is_leap_year(int year) {
//	if (year % 4 == 0 && year % 100 != 0) {
//		printf("%d 是闰年\n", year);
//	}
//	else if (year % 400 == 0) {
//		printf("%d 是闰年\n", year);
//	}
//	else {
//		printf("%d 不是闰年\n", year);
//	}
//
//}
//
//int main() {
//	int year;
//	while (scanf("%d", &year) != EOF) {
//		is_leap_year(year);
//	}	
//	return 0;
//}

//void Init(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		arr[i] = i + 1;
//	}
//}
//
//void Printf(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main() {
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, len);
//	Printf(arr, len);
//	Reverse(arr, len);
//	Printf(arr, len);
//	return 0;
//}


//int main() {
//	int money;
//	scanf("%d", &money);
//
//	int total = money;
//	int empty = money;
//
//	while (empty > 1) {
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d ", total);
// return 0;
//}

int main() {

	
}