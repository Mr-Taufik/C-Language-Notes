#include <stdio.h>

int main()
{
	double e = 1;
	double sum = 0;
	double factorial = 1.0;
	int n;
	printf(" Enter a number n : \n");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
		sum += 1.0 / factorial;
	}

	e += sum;
	printf("e = %.15lf", e);///%lf Ĭ��ֻ����ʾС�������λ
	/////double �����ڴ����ϵͳ���ṩ��Լ 15-17 λʮ������Ч���ֵľ���
	/////
	return 0;
}
