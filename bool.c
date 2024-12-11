//这个代码显示了布尔值的用法，主要用来熟悉bool在自定义函数里面的运用


#include <stdio.h>
#include <stdbool.h>

bool isPrime(int numbers);////该函数接受一个整数参数并且返回一个布尔值表示该数是不是质数
int main()
{
  setbuf(stdout, NULL);
	int numbers;
	printf("Enter a numbers: ");
	scanf("%d", &numbers);
	if (numbers <= 0)
	{
		printf("Enter a significnat numbers");
		scanf("%d", &numbers);
	}
	if (isPrime(numbers))////这里调用了bool函数，bool函数会接受numbers并返回true or false
	{
		printf("This numbers is isPrime");
	}
	else
	{
		printf("This umbers is not isPrime");
	}

	return 0;
}
bool isPrime(int numbers)
{
	for (int i = 2; i < numbers; i++)
	{
		if (numbers % i == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
