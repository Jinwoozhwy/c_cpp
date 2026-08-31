#include <stdio.h>
#include <string.h>

int findRound(char *str1,char *str2)
{
    char tmp[256] = { 0 };
    strcpy(tmp,str1);
    strcat(tmp, str1);

    return strstr(tmp,str2) != NULL;
}
int main()
{
    char str1[] = "abcde";//主串 
    char* str2 = "cdeba";//子串
    int ret = findRound(str1, str2);
    if (ret == 1)
    {
        printf("是旋转后的结果\n");
    }
    else
    {
        printf("不是旋转后的结果\n");
    }

    ////字符串查找
    //char *p = strstr(str1, str2);
    //printf("%s\n",p);
    return 0;
}