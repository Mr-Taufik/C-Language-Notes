#include <stdio.h>

// 函数声明：通过指针修改变量的值
void increment(int* num);

int main() {
	int a = 5;
	printf("函数调用前，a = %d\n", a); // 输出：5

	increment(&a); // 传递a的地址

	printf("函数调用后，a = %d\n", a); // 输出：6

	return 0;
}

void increment(int* num) {
	(*num)++; // 通过指针修改变量的值
}


////////////////
#include <stdio.h>

// 函数声明：交换两个整数
void swap(int* a, int* b);

int main() {
	int x = 10;
	int y = 20;

	printf("交换前: x = %d, y = %d\n", x, y); // 输出：10, 20

	swap(&x, &y); // 传递x和y的地址

	printf("交换后: x = %d, y = %d\n", x, y); // 输出：20, 10

	return 0;
}

void swap(int* a, int* b) {
	int temp = *a; // temp = x
	*a = *b;       // x = y
	*b = temp;     // y = temp
}
/////////////////////
#include <stdio.h>

// 函数声明：计算和与差
void calculate(int a, int b, int* sum, int* diff);

int main() {
	int num1, num2;
	int sum, difference;

	printf("请输入两个整数: ");
	scanf("%d %d", &num1, &num2);

	calculate(num1, num2, &sum, &difference);

	printf("和 = %d, 差 = %d\n", sum, difference);

	return 0;
}

void calculate(int a, int b, int* sum, int* diff) {
	*sum = a + b;
	*diff = a - b;
}
