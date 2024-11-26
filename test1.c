////////////�����Ǽ������׳���ӣ������ǵ�������׳˵ļ��㷽��
#include <stdio.h>

unsigned long long calculateFactorisalSum(int N);

int main()
{
	int N;
	unsigned long long result;
	while (1)
	{
		printf("����һ������1������N\n");
		scanf_s("%d", &N);
		if (N <= 1)
		{
			printf("������Ч��������һ������\n");
			while (getchar() != '\n');
			continue;
		}
		if (N > 1)
		{
			break;
		}
		printf("N �������1�� ���������롣\n");

	}

	result = calculateFactorisalSum(N);

	printf("1 �� %d �Ľ׳�֮��Ϊ��%llu\n", N, result);
	return 0;
}
unsigned long long calculateFactorisalSum(int N)
{
	unsigned long long sum = 0;
	unsigned long long factorial = 1;

	for (int i = 1; i <= N; i++)
	{
		factorial *= i; // ����i�Ľ׳�
		sum += factorial; // ����ǰ�׳��ۼӵ�sum��
	}
	//��һ��ѭ����i = 1����factorial = 1 * 1 = 1��1!= 1����
	//�ڶ���ѭ����i = 2����factorial = 1 * 2 = 2��2!= 2����
	//������ѭ����i = 3����factorial = 2 * 3 = 6��3!= 6����
	//ѭ��������sum�д洢����1!+ 2!+ 3!+ ... + N!���ܺ�
	return sum;
}
