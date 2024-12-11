//这个代码显示了布尔值的用法，主要用来熟悉bool在自定义函数里面的运用
//这个代码呢用了bool值作为返回值根据 isPrime 函数的返回值，输出相应的消息

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number);//这里传入一个参数，然后isPrime这个函数会返回布尔值

int main()
{
    setbuf(stdout, NULL);
    int number;
    do {
        printf("Enter a positive integer greater than 1: ");
        scanf_s("%d", &number);
        if (number <= 1)
        {
            printf("Invalid input. Please enter a number greater than 1.\n");
        }
    } while (number <= 1);
    
    if (isPrime(number))//这里接收到函数的返回值，1为真就执行第一条语句，0为假就执行else语句
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

bool isPrime(int number)
{
    if (number <= 1) return false;
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }//只有在循环结束后确认没有任何因子时，才返回 true
    return true;
}
