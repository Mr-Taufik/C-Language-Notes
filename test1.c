#include <stdio.h>
#include <math.h>
int main()
{

	int arr[5] = { 0 };
	int count = 0;
	for (int i = 0; i < 100; i++)//baba i son j
	{
		for (int j = 0; j < 100; j++)
		{
			if (i == (j + 27))
			{
				int temp1 = i;
				int temp2 = j;
				arr[0] = temp1 % 10;
				temp1 = temp1 / 10;
				arr[1] = temp1 % 10;
				arr[2] = temp2 % 10;
				temp2 = temp2 / 10;
				arr[3] = temp2 % 10;
				if (arr[0] == arr[3] && arr[1] == arr[2])
				{
					printf("爸爸的年龄%d 儿子的年龄%d\n", i, j);
					count++;
				}
			
			}
		}
	}

	printf("一共有%d种情况", count);
   
	return 0;
}