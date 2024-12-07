这是一个简易计算器，具有一些简单的操作；



#include <stdio.h>
#include <math.h>

typedef void(*Case)();

void f1();
void f2();

void Add(int x, int y);
void Subtra(int x, int y);
void Mul(int x, int y);
void Div(int x, int y);
void Sqrt(int x, int y);
void Pow(int x, int y);
void Factorial(int x, int y);



int main()
{
	int choice;
	int check = 1;
	int x = 0;
	int y = 0;
	while (check == 1)
	{
		printf("选择你的选项\n");
		printf("1.加减法\t2.乘除法\t3.开根号\n4.幂次方\t5.阶乘\n");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:

			f1();

			break;
		case 2:

			f2();

			break;
		case 3:

			printf("输入开方数x ");
			scanf_s("%d", &x);
			printf("输入第二个数字y (无效数字)");
			scanf_s("%d", &y);

			Sqrt(x, y);

			break;
		case 4:
			printf("输入底数x ");
			scanf_s("%d", &x);
			printf("输入幂次方y ");
			scanf_s("%d", &y);

			Pow(x, y);


			break;
		case 5:
			printf("输入需要阶乘的数字x ");
			scanf_s("%d", &x);
			printf("输入需要阶乘的项y ");
			scanf_s("%d", &y);

			Factorial(x, y);


			break;
		default:
			printf("输入无效！\n");
			break;
		}

		printf("\n输入1继续运行计算器，输入0退出计算器\n");
		scanf_s("%d", &check);
		if (check != 1)
		{
			break;
		}
	}

	printf("谢谢游玩！");

	

	Case choice1 = f1;
	Case choice2 = f2;



	return 0;
}

void f1()
{
	int choice;
	int x, y;
	printf("加法输入1 减法输入2\n");
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		printf("输入两个数字x y\n");
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		Add(x, y);
	}
	else if (choice == 2)
	{
		printf("输入两个数字x y\n");
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		Subtra(x, y);
	}
}
void f2()
{
	int choice;
	int x, y;
	printf("乘法输入1 除法输入2\n");
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		printf("输入两个数字x y\n");
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		Mul(x, y);
	}
	else if (choice == 2)
	{
		printf("输入两个数字x y\n");
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		Div(x, y);
	}
}

void Add(int x, int y)
{
	printf("\n%d和%d的和是%d", x, y, x + y);
}
void Subtra(int x, int y)
{
	printf("\n%d减去%d等于%d", x, y, x - y);
}
void Mul(int x, int y)
{
	printf("\n%d乘于%d等于%d", x, y, x*y);
}
void Div(int x, int y)
{
	if (y == 0)
	{
		printf("错误：除数不能为零。\n");
		return;
	}
	printf("\n%d除于%d等于%d", x, y, x/y);
}

void Sqrt(int x, int y)
{
	
	double result = sqrt((double)x);
	printf("你输入的数字的平方根是%.4lf", result);
}

void Pow(int x, int y)
{
	int result = (int)pow((double)x, (double)y);
	printf("你输入的底数%d的%d次方的答案是%d", x, y, result);
}

void Factorial(int x, int y)
{
	
	int sum = 1;

	for (int i = 0; i < y; i++)
	{
		sum *= x;
		x--;
	}
	printf("你输入的数字的%d项阶乘结果是%u", y, sum);

}



