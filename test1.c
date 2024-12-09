#include <stdio.h>

int work(int x, int y, int(*Function)(int, int));
typedef int(*F)(int, int);

int plus(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}

int main()
{
	F q1 = plus;
	F q2 = sub;

	int x = 10;
	int y = 1;

	int result1 = work(x, y, q2);
	int result2 = work(x, y, q1);

	printf("%d\n", result1);
	printf("%d", result2);
	return 0;
}


int work(int x, int y, int(*Function)(int, int))
{
	return Function(x, y);
}
