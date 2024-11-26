#include <stdio.h>

int main()
{
	int array[5];
	// 输入部分，索引从0到4
	for (int i = 0; i < 5; i++)
	{
		printf("Enter number %d: ", i + 1);
		// 使用 scanf 代替 scanf_s
		if (scanf_s("%d", &array[i]) != 1) {////scanf_s（以及 scanf）的返回值是成功匹配并赋值的输入项的数量。
			///在你的例子中，"%d" 期望读取一个整数，所以如果成功读取一个整数，scanf_s 会返回 1。
			///如果输入无效（例如，用户输入的不是整数），scanf_s 会返回一个小于 1 的值（通常是 0 或 EOF
			////if (scanf_s("%d", &array[i]) != 1) 这一行的意思是：如果 scanf_s 返回的值不等于 1，说明输入无效

			printf("输入无效。\n");
			return 1; // 提前退出程序
		}
	}

	printf("\n评分结果:\n");
	// 输出部分
	for (int j = 0; j < 5; j++)
	{
		if (array[j] > 90)
		{
			printf("%d  A\n", array[j]);
		}
		else if (array[j] > 80 && array[j] <= 90)
		{
			printf("%d B\n", array[j]);
		}
		else if (array[j] > 70 && array[j] <= 80)
		{
			printf("%d C\n", array[j]);
		}
		else if (array[j] > 60 && array[j] <= 70)
		{
			printf("%d D\n", array[j]);
		}
		else
		{
			printf("%d F\n", array[j]); // 通常60以下为F
		}
	}

	return 0;
}