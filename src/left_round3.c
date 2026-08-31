#include <stdio.h>
#include <string.h>

void ReverseRange(char* str, int start, int end) {
    int left = start;
    int right = end;
    while (left < right)
    {
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}
void leftRound(char* str, int k) {
    int len = strlen(str);
    int time = k % len;//2 
    ReverseRange(str, 0,time-1);
    ReverseRange(str, time, len - 1);
    ReverseRange(str, 0, len - 1);
}

int main() {
    char str[] = "abcdef";
    leftRound (str, 7);
    printf("%s\n", str);
    return 0;
}