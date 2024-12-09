#include <stdio.h>



void sort(int a[], int length, int(*Function)(int, int));
int sheng(int x, int y);
int jiang(int x, int y);

int main()
{
	int array[10];

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &array[i]);
	}

	int length = sizeof(array) / sizeof(array[0]);

    sort(array, length, jiang);

	for (int j = 0; j < 10; j++)
	{
		printf("%d ", array[j]);
	}

	return 0;
}

void sort(int a[], int length, int(*Function)(int, int))
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (Function(a[j], a[j+1]))
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int sheng(int x, int y)
{
	if (x > y)
	{
		return 1;
	}
	return 0;
}

int jiang(int x, int y)
{
	if (x < y)
	{
		return 1;
	}
	return 0;
}
