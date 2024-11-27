#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("������һ������: ");
    while (1)
    {
        if (scanf_s("%d", &number) != 1)
        {
            printf("������Ч������������\n");
            while (getchar() != '\n'); // ������뻺����
            printf("������һ������: ");
            continue;
        }
        else
        {
            break;
        }
    }

    if (number <= 1)
    {
        printf("�����ֲ�������\n");
        return 0;
    }

    int isPrime = 1; // ����������
    int limit = (int)sqrt((double)number);

    for (int i = 2; i <= limit; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0; // �ҵ�һ�����ӣ���������
            break;
        }
    }

    if (isPrime)
    {
        printf("������������\n");
    }
    else
    {
        printf("�����ֲ�������\n");
    }

    return 0;
}
