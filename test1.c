#include <stdio.h>
#include <math.h>
#include <stdlib.h> // ���� system("pause")

// ��������������ǰN���ƽ����֮��
double calculateSquareRootSum(int N);

int main()
{
	int N;
	double sum = 0.0;

	while (1) {
		printf("������һ������1������N�� ");
		// ʹ�� scanf ���� scanf_s
		if (scanf_s("%d", &N) != 1) {
			// ������벻��������������뻺����
			printf("������Ч��������һ��������\n");
			while (getchar() != '\n'); // ���������
			continue;
			//�ڼ�⵽��Ч�����ʹ��
			// while (getchar() != '\n'); ������뻺�������Է�ֹ����ѭ��
		}//����һ������ѭ����whileѭ������Ҫ�ֶ��˳�
		if (N > 1) {
			break; // ��Ч���룬�˳�ѭ��
		}
		printf("N �������1�����������롣\n");
	}

	// ����ƽ����֮��
	sum = calculateSquareRootSum(N);

	// ������
	printf("ǰ%d���ƽ����֮�͵��� %.6lf\n", N, sum);

	// ��ͣ����̨���Ա�鿴���
	 system("pause"); // ��������Windows���������ʹ��system("pause")������ʹ���������������
	// printf("���س����˳�...");
	// getchar(); // ��ȡ��һ���������µĻ��з�
	// getchar(); // �ȴ��û����س�

	return 0;
}
// �������壺����ǰN���ƽ����֮��
double calculateSquareRootSum(int N)
{
	double sum = 0.0;
	for (int i = 1; i <= N; i++)
	{
		sum += sqrt((double)i);
	}
	return sum;
}