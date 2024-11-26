////////////下面是计算多个阶乘相加，上面是单个计算阶乘的计算方法
#include <stdio.h>

unsigned long long calculateFactorisalSum(int N);

int main()
{
	int N;
	unsigned long long result;
	while (1)
	{
		printf("输入一个大于1的整数N\n");
		scanf_s("%d", &N);
		if (N <= 1)
		{
			printf("输入无效，请输入一个整数\n");
			while (getchar() != '\n');
			continue;
		}
		if (N > 1)
		{
			break;
		}
		printf("N 必须大于1， 请重新输入。\n");

	}

	result = calculateFactorisalSum(N);

	printf("1 到 %d 的阶乘之和为：%llu\n", N, result);
	return 0;
}
unsigned long long calculateFactorisalSum(int N)
{
	unsigned long long sum = 0;
	unsigned long long factorial = 1;

	for (int i = 1; i <= N; i++)
	{
		factorial *= i; // 计算i的阶乘
		sum += factorial; // 将当前阶乘累加到sum中
	}
	//第一次循环（i = 1）：factorial = 1 * 1 = 1（1!= 1）。
	//第二次循环（i = 2）：factorial = 1 * 2 = 2（2!= 2）。
	//第三次循环（i = 3）：factorial = 2 * 3 = 6（3!= 6）。
	//循环结束后，sum中存储的是1!+ 2!+ 3!+ ... + N!的总和
	return sum;
}
