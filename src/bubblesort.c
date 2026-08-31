//冒泡排序的核心思想就是，两两相邻的两个元素进行比较

#include <stdio.h>

void bubble_sort (int arr[], int sz) {
    for(int i = 0; i < sz - 1; i++) {
        //假设已经有序了
        int flag = 1;
        for(int j =0; j < sz- 1 -i; j++) {
            if(arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = 0;
            }
        }
        if(flag == 1) {
            break;
        }
    }

}

int main () {
    int arr[] = {9, 0, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) /sizeof(arr[0]);
    bubble_sort(arr, sz);
    int *p = arr;
    for(int i = 0; i < sz; i++) {
        printf("%d ", *(p+i));
    }
    return 0;
}