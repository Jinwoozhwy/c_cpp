#include <stdio.h>
#include <string.h>

void Func()
{
    for (char killer = 'a'; killer <= 'd'; killer++)
    {
        if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
        {
            printf("killer是:%c\n",killer);
        }
    }
}

int main() {
    Func();
    return 0;
}