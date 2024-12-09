这个代码主要是为了适应一下回调函数的用法，这里面的work函数会传入两个参数，还有一个函数类型



#include <stdio.h>

int work(int x, int y, int(*Function)(int, int));//这里定义的就是传入两个整形数字还有函数类型
typedef int(*F)(int, int);                       //这里只是利用typedef用来换一个写法

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


int work(int x, int y, int(*Function)(int, int))                   /////这里就是会传入两个函数，然后里面的函数调用的时候就是调用传入的函数。
{
	return Function(x, y);
}
