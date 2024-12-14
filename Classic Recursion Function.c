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

///优缺点：
优点：
增加了函数的灵活性，可以动态选择回调函数的行为。
缺点：
实现复杂，阅读和理解难度增加。
不如直接递归直观，可能导致性能开销增加。
传统递归 vs. 函数指针/回调函数
直接递归：
实现简单：代码简洁明了，易于理解和维护。
性能较好：调用开销较小，直接使用函数调用。
可读性高：符合大多数程序员的直觉。
使用函数指针或回调函数：
灵活性更高：可以动态地改变递归的行为或逻辑。
复杂性增加：需要管理函数指针的传递，增加了代码的复杂度。
可读性降低：不如直接递归直观，可能让代码难以理解。
5. 与递归的关系
无论是直接递归、通过函数指针还是通过回调函数实现，最终的目标都是实现函数的自我调用，这就是递归的核心概念。区别在于实现方式的不同：

直接递归：函数在自身内部直接调用自身。
函数指针/回调递归：函数通过传递的函数指针或回调函数来调用自身或其他函数，从而实现递归。
尽管实现方式不同，所有这些方法都是递归的一种形式，因为它们都依赖于函数的自我调用来解决问题。

6. 何时使用函数指针或回调函数递归
在大多数情况下，直接递归已经足够满足需求，并且更加高效和易于维护。然而，在某些高级编程场景下，使用函数指针或回调函数可能带来额外的灵活性，例如：

高阶函数：需要将递归逻辑作为参数传递给其他函数。
策略模式：根据不同的策略选择不同的递归实现。
延迟执行：需要在某些条件下动态决定是否进行递归调用。
但这些场景较为少见，对于大多数基础的递归问题，直接递归是更好的选择。

7. 总结
直接递归：简单、高效、易于理解，是实现递归的首选方法。
函数指针递归：增加了灵活性，但实现复杂，不常用。
回调函数递归：在特定高级场景下有用，但对于基础递归问题，复杂性较高。




 