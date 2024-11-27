#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int a, b;
	printf("输入一个整数n 3<=n<=7: ");
	scanf_s("%d", &n);

	switch (n)
	{
	case 3:
		a = 100;
		b = 999;
		break;
	case 4:
		a = 1000;
		b = 9999;
		break;
	case 5 :
		a = 10000;
		b = 99999;
		break;
	case 6 :
		a = 100000;
		b = 999999;
		break;
	case 7:
		a = 1000000;
		b = 9999999;
		break;
	}

	int arr[8];

	for (int i = a; i <= b; i++)
	{
		int temp = i;
		for (int j = 0; j < n; j++)
		{
			arr[j] = temp % 10;
			temp = temp / 10;
		}
		int sum = 0;
		for (int z = 0; z < n; z++)
		{
			sum += pow(arr[z], n);
		}
		if (sum == i)
		{
			printf("%d是水仙花数\n", i);
		}
		
	}

	return 0;
}