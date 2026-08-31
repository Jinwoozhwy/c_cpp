#include <stdio.h>
#include <string.h>

void leftRound(char *str, int k) {
    int len = strlen(str);
    int time = k % len;

    for (int i = 0; i < time; i++)
    {
        char tmp = str[0];

        int j = 0;
        for (; j < len - 1; j++)
        {
            str[j] = str[j + 1];
        }
        str[j] = tmp;
    }
}

int main() {
    char str[] = "abcdef";
    leftRound(str, 5);
    printf("%s\n", str);
    return 0;
}