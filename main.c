////函数指针

#include <stdio.h>

typedef int (*T)(int, int);//声明一个新的类型T T表示函数指针的类型
int add(int x, int y);
int sub(int x, int y);
void f1();

int main()
{
     void (*p)();//定义函数指针
     int x = 10;
     int y = 5;

     T q1 = add;//等价于int (*q1)(int, int) = add;
     T q2 = sub;//等价于int (*q2)(int, int) = sub;
     p = f1;
     p();//通过函数指针调用函数 等价于f1()
     printf("%d\n", q1(x, y));
     printf("%d", q2(x, y));

     return 0;
}

int add(int x, int y)
{
     return x + y;
}

int sub(int x, int y)
{
     return x - y;
}
void f1()
{
     printf("Hello world!\n");
}