#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("请输入一个整数: ");
    while (1)
    {
        if (scanf_s("%d", &number) != 1)
        {
            printf("输入无效，请重新输入\n");
            while (getchar() != '\n'); // 清除输入缓冲区
            printf("请输入一个整数: ");
            continue;
        }
        else
        {
            break;
        }
    }

    if (number <= 1)
    {
        printf("该数字不是素数\n");
        return 0;
    }

    int isPrime = 1; // 假设是素数
    int limit = (int)sqrt((double)number);

    for (int i = 2; i <= limit; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0; // 找到一个因子，不是素数
            break;
        }
    }

    if (isPrime)
    {
        printf("该数字是素数\n");
    }
    else
    {
        printf("该数字不是素数\n");
    }

    return 0;
}
