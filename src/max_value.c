#include <stdio.h>

//10个整数的最大值
int main()
{
	//数组 
	int arr[10] = {1,3,5,7,2,4,9,10,8,3};
	int max = arr[0];//arr[0]代表假设   第一个元素是最大值 
	for (int i = 1;i < 10;i++)
	{
		//1 <  3
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d\n",max);
	return 0;
}