#include <stdio.h>

int main()
{
    int a, b;
    int lower, upper;
    float sum_of_squares = 0.0f;
    float sum_of_reciprocals = 0.0f;
    float total_result = 0.0f;

    // �����һ����
    printf("Enter the first number: ");
    if (scanf_s("%d", &a) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // ����ڶ�����
    printf("Enter the second number: ");
    if (scanf_s("%d", &b) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // ȷ����С�ͽϴ����
    if (a > b)
    {
        upper = a;
        lower = b;
    }
    else
    {
        upper = b;
        lower = a;
    }

    // ����Ƿ�����Ч�ķ�Χ
    if (lower <= 0) {
        printf("The range must consist of positive integers to calculate reciprocals.\n");
        return 1;
    }

    // ����ƽ���ͺ͵�����
    for (int i = lower; i <= upper; i++)
    {
        sum_of_squares += (float)(i * i);
        sum_of_reciprocals += 1.0f / i;
    }

    // �����ܽ��
    total_result = sum_of_squares + sum_of_reciprocals;

    // ������
    printf("The sum of squares is: %.2f\n", sum_of_squares);
    printf("The sum of reciprocals is: %.2f\n", sum_of_reciprocals);
    printf("The total result (sum of squares + sum of reciprocals) is: %.2f\n", total_result);

    return 0;
}
