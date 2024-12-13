////自定义递归函数
//这个代码实现了一些函数递归的想法，利用函数自己调用自己来实现这个功能
#include <stdio.h>

//// 定义一个递归函数来计算阶乘
long long factorial(int n);
int main()
{
     int number;
     printf("请输入一个非负整数计算其阶乘： ");
     scanf_s("%d", &number);
     long long result = factorial(number);
     if(result != -1)
     {
          printf("%d的阶乘是%lld\n", number, result);
     }
     return 0;
}
long long factorial(int n)
{
     if(n< 0)
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
          return n * factorial(n - 1);
          ////这里就用了函数的递归了
     }
}
/*递归的调用过程
 * 注意事项
递归深度：递归函数在调用自身时会使用栈内存，因此对于非常大的输入值，可能会导致栈溢出错误。
优化：对于某些递归问题，可以考虑使用迭代方法或记忆化技术（memoization）来优化性能和减少内存使用。
 * factorial(5)
= 5 * factorial(4)
= 5 * (4 * factorial(3))
= 5 * (4 * (3 * factorial(2)))
= 5 * (4 * (3 * (2 * factorial(1))))
= 5 * (4 * (3 * (2 * 1)))
= 120
*/
