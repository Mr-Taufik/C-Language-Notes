////经典递归与回调函数递归
long long factorial(int n)
{
    if(n < 0)
    {
        printf("错误，负数没有阶乘!\n");
        return -1;
    }
    else if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // 递归调用
    }
}
 在这个实现中，factorial函数直接调用自身，这是递归的最基本形式。

2. 使用函数指针实现递归
函数指针是指向函数的指针，允许你在运行时选择要调用的函数。通过函数指针实现递归，
你需要传递函数指针给递归调用的地方。以下是一个示例：

#include <stdio.h>

// 定义一个函数指针类型
typedef long long (*FactorialFunc)(int, FactorialFunc);

// 递归函数的实现，接受函数指针作为参数
long long factorial_impl(int n, FactorialFunc func)
{
    if(n < 0)
    {
        printf("错误，负数没有阶乘!\n");
        return -1;
    }
    else if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * func(n - 1, func); // 通过函数指针调用自身
    }
}

// 定义函数指针变量，并初始化
long long factorial(int n)
{
    return factorial_impl(n, factorial_impl);
}

int main()
{
    int number;
    printf("请输入一个非负整数计算其阶乘： ");
    scanf("%d", &number); // 使用标准的scanf以提高兼容性
    long long result = factorial(number);
    if(result != -1)
    {
        printf("%d的阶乘是%lld\n", number, result);
    }
    return 0;
}





 
