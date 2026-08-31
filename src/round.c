#include <stdio.h>
#include <string.h>

//str是原字符串  str2是旋转后的
int leftRound(char* str, char *str2)
{
    int len = strlen(str);
    //int time = k % len;

    for (int i = 0; i < len; i++)
    {
        char tmp = str[0];
        //j = 2
        int j = 0;
        for (; j < len - 1; j++)
        {
            str[j] = str[j + 1];
        }
        //j = 3
        str[j] = tmp;
        /*
        str和str2进行比较
        如果str > str2 返回正数
            abf   abc
            abcd  abc
        如果str == str2 返回0
             abc   abc
        如果str < str2 返回负数
        */ 
        if (strcmp(str,str2) == 0)
        {
            return 1;
        }
    }
    return  0;
}

int main()
{
    char str1[] = "abcde";
    char* str2 = "cdeba";
    int ret = leftRound(str1, str2);
    if (ret == 1)
    {
        printf("是旋转后的结果！\n");
    }
    return 0;
}