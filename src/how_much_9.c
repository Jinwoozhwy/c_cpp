#include <stdio.h>

//有多少个数字 包含9 
// int main()
// {
// 	int count = 0;
// 	for (int i = 1; i <= 100; i++)
// 	{
// 		//99
// 		if (i % 10 == 9)
// 		{
// 			count++;
// 		}
// 		else if (i / 10 == 9)
// 		{
// 			count++;
// 		}
// 	}
// 	printf("%d\n", count);
//     return 0;
// }


//有多少个9
int main()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		//99
		if (i % 10 == 9)
		{
			count++;
		}
		//99
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n",count);
    return 0;
}