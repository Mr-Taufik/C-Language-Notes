#include <stdio.h>

// 函数声明：迭代计算阶乘
unsigned long long fact(int n);

int main() {
	int number;
	unsigned long long result;

	while (1) {
		printf("请输入一个非负整数 (输入-1退出): ");
		if (scanf_s("%d", &number) != 1) {
			printf("输入无效，请输入一个整数。\n");
			// 清除输入缓冲区
			while (getchar() != '\n');
			continue;
		}

		if (number == -1) {
			printf("退出程序。\n");
			break;
		}

		if (number < 0) {
			printf("输入无效，请输入一个非负整数。\n");
			continue;
		}

		result = fact(number);
		printf("%d 的阶乘是 %llu\n", number, result);
	}

	return 0;
}
unsigned long long fact(int n) {
	unsigned long long result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
		///这行代码的作用是将当前的 result 值乘以循环变量 i，
		///并将结果赋值回 result
	}
	return result;
}