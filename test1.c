#include <stdio.h>

int main()
{
	int number;
	int sum = 0;

	while (scanf_s(" %d", &number) != 0)
	{
		if (number % 2 != 0)
		{
			sum += number;
			printf("奇数%d, 目前总和%d\n", number, sum);
		}
	}
	return 0;
}