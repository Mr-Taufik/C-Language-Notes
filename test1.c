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
			printf("����%d, Ŀǰ�ܺ�%d\n", number, sum);
		}
	}
	return 0;
}