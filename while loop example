这是一些while循环的一些小小示例用法



#include <stdio.h>
#include <math.h>

int main() {
	int N;
	double sum = 0.0;

	// 提示用户输入一个正整数
	printf("请输入一个正整数N（大于0）： ");
	scanf("%d", &N);

	// 检查输入是否有效
	if (N <= 0) {
		printf("输入无效，N 必须大于0。\n");
		return 1; // 终止程序，返回错误状态
	}

	int i = 1; // 初始化控制变量

	while (i <= N) { // 条件检查
		sum += sqrt((double)i); // 计算平方根并累加
		i++; // 更新控制变量
	}

	printf("前%d项的平方根之和等于 %.6lf\n", N, sum);

	return 0;
}
/////无线循环，需要手动终止
//////////////////////////
#include <stdio.h>

int main() {
	int count = 0;

	while (1) { // 永远为真的条件
		printf("这是一个无限循环，循环次数：%d\n", count);
		count++;

		if (count >= 10) { // 当计数达到10时，退出循环
			break;
		}
	}

	printf("循环结束。\n");

	return 0;
}
//////////////////

#include <stdio.h>

int main() {
	int number;

	do {
		printf("请输入一个正整数： ");
		scanf("%d", &number);

		if (number <= 0) {
			printf("输入无效，请重新输入。\n");
		}
	} while (number <= 0); // 条件检查

	printf("您输入的正整数是： %d\n", number);

	return 0;
}
///////////////////
///////////////
/////在do while中加入清空缓冲区
#include <stdio.h>

int main() {
	int number;
	int result;

	do {
		printf("请输入一个正整数： ");
		result = scanf("%d", &number);

		if (result != 1) {
			// scanf 没有成功读取一个整数
			printf("输入无效，请重新输入。\n");
			// 清空输入缓冲区
			while (getchar() != '\n' && getchar() != EOF);
			number = -1; // 设置为无效值以继续循环
		}
		else if (number <= 0) {
			// 输入的整数不符合要求
			printf("输入无效，请输入一个正整数。\n");
			// 清空输入缓冲区（如果有多余的字符）
			while (getchar() != '\n' && getchar() != EOF);
		}
	} while (number <= 0);

	printf("你输入的正整数是：%d\n", number);
	return 0;
}
