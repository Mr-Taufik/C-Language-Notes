#include <stdio.h>

int main()
{
	int sign = 1;
	int sum = 0;

	// �� 1 ��ʼ�� 101������Ϊ 2
	for (int i = 1; i <= 101; i += 2)
	{
		sum += i * sign; // ���ݷ��Ž��мӼ�
		sign = -sign;    // ÿ�η��Ž���
	}

	printf("plus number: %d\n", sum);
	return 0;
}
