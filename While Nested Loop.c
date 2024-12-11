这是一个九九乘法表的例子

#include <stdio.h>

int main() 
{
    int i = 1;

    while (i <= 9) 
    { // 外层循环：行
        int j = 1;
        while (j <= 9) 
        { // 内层循环：列
            printf("%d*%d=%2d\t", i, j, i * j);
            j++;
        }
        printf("\n"); // 换行
        i++;
    }

    return 0;
}
