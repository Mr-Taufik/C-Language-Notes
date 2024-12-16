谓词函数是一种返回布尔类型true false 的函数，用于判断某个条件是否满足，常常用在过滤搜索条件判断等场景

#include <stdio.h>
#include <stdbool.h>

// 函数声明
void prin(int *array, int len, bool(*predicate)(int));
bool is_positive(int x);
bool isno_positive(int x);

int main()
{
     int array[10] = {-1, 1, -2, 2, -3, 3, -4, 4, -5, 5};
     
     // 使用谓词函数 is_positive 过滤并打印正数
     prin(array, 10, is_positive);

     // 使用谓词函数 isno_positive 过滤并打印负数
     prin(array, 10, isno_positive);

     return 0;
}

// prin 函数：根据谓词函数的结果打印数组中的元素
void prin(int *array, int len, bool(*predicate)(int))
{
     for(int i = 0 ; i < len ; i++)
     {
          if(predicate(array[i])) // 调用谓词函数
          {
               printf("%d ", array[i]);
          }
     }
}

// 判断是否为正数的谓词函数
bool is_positive(int x)
{
     if(x > 0)
     {
          return true;
     }
     else
     {
          return false;
     }
}

// 判断是否为负数的谓词函数
bool isno_positive(int x)
{
     if(x < 0)
     {
          return true;
     }
     else
     {
          return false;
     }
}

谓词函数的定义：

is_positive：判断一个整数是否大于0。如果是，返回true，否则返回false。
isno_positive：判断一个整数是否小于0。如果是，返回true，否则返回false。
函数指针的使用：

prin函数接受一个函数指针predicate，这个函数指针指向一个接收int并返回bool的函数。
通过传递不同的谓词函数，prin函数可以执行不同的过滤逻辑。例如，传递is_positive会打印数组中的所有正数，而传递isno_positive会打印所有负数。
函数调用：

在main函数中，首先调用prin(array, 10, is_positive);，这会遍历数组并打印所有大于0的元素。
然后调用prin(array, 10, isno_positive);，这会遍历数组并打印所有小于0的元素。
谓词函数的优势
灵活性：通过将不同的谓词函数传递给同一个函数，可以实现多种不同的行为，而无需编写多个类似的函数。
可重用性：谓词函数可以在不同的上下文中重复使用，提高代码的可维护性和可读性。
抽象性：将条件判断逻辑抽象为独立的函数，使得主函数的逻辑更加清晰。

总结
谓词函数是一种强大且灵活的编程工具，特别适用于需要根据特定条件筛选或处理数据的场景。
在您的代码中，通过定义不同的谓词函数并将其传递给prin函数，实现了对数组中正数和负数的筛选与打印。
这种设计模式不仅提高了代码的可读性和可维护性，还展示了函数指针在C语言中的应用。



