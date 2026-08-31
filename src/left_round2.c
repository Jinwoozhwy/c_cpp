#include <stdio.h>
#include <string.h>

void leftRound(char *str, int k) {
    //abcd   -> k=2     ---> cdab
    //strcpy(); 字符串拷贝
    //strncat(); 字符串拼接->n个
    int len = strlen(str);
    int time = k % len;//2 
    char tmp[256] = { 0 };
    strcpy(tmp, str+time); // cd
    strncat(tmp, str, time);//cdab   tmp当中存储的就是cdab
    strcpy(str,tmp);
}

int main() {
    //strcpyO;字符串拷贝
    // //strncat(;字符串拼接->n个
    char strl[10] = { 0 };
    char* str2 = "abcd";
    strcpy (strl,str2);
    printf("%s\n",strl);
    printf ("%s\n", str2);
    char str3[100] = "abc";
    char* str4 = "hello";
    strncat (str3,str4,2);
    //strcat(str3，str4);//把str4里面的 所有内容拷贝到str3当中
    printf ("str3 == %s\n", str3);
    return 0;
}