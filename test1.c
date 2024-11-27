#include <stdio.h>
#include <math.h>

int isPrime(int num) {
	if (num < 2)
		return 0; // 0 �� 1 ��������
	int max_divisor = (int)sqrt((double)num);
	for (int i = 2; i <= max_divisor; i++) {
		if (num % i == 0)
			return 0; // �ҵ����ӣ�������
	}
	return 1; // �����ӣ�����
	///ȷ��ֻ�������п��ܵ�j��������iʱ���Ž�i�ж�Ϊ����
}

int main()
{
	int count = 0;
	printf("��ӡ200 - 300 ֮�������\n");

	for (int i = 200; i <= 300; i++)
	{
		if (isPrime(i))
		{
			printf("%d ", i);
			count++;
		}
	}

	printf("\n������������: %d\n", count);
	return 0;
}