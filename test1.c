//函数指针，

#include <stdio.h>

typedef int(*T)(int, int);//声明一个新的类型T，T表示函数指针类型


void f1()
{
	printf("hello world\n");
}

int add(int x, int y)
{
	return x + y;
}

int main()
{

	void (*p)();   ///定义函数指针，右左法则，左边表示这个指针的类型*p被括号括起来
	//括号里面没东西说明里面没有参数
	p = f1;

	p();//通过函数指针调用函数

	int (*q)(int, int) = add; //这里就是函数名赋值给了q
	//这里是定义一个指针指向一个函数，这个函数含有两个整形参数
	q(3, 4);


	///核心   前面是类型，中间是变量名，加上星号表示是一个指针，括号里面是形参
	printf("%d\n", q(3, 4));


	T q1 = add;   ///等价于int (*q1)(int, int) = add;


	printf("%d", q1(2, 3));
	return 0;
}




