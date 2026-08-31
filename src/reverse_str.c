//字符串逆序
#include <stdio.h>
void reverse_str(char *str) {
    char *left = str;
    char *right = str + strlen(str) -1;
    while(left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main() {
    char str[10000] = {0};
    //scanf遇到空格就不读取了
    // while(scanf("%s", str) != EOF) {
    while(gets(str)) {
        reverse_str(str);
        printf("%s", str);    
    }
    return 0;
}