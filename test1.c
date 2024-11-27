#include <stdio.h>
#include <math.h>

// ������������ѡ��
double calculateSeries(double x, double threshold, int* termCount);

int main() {
	double x;
	double sum;
	int termCount = 0;
	double threshold = 0.00001;

	// ���벿��
	while (1) {
		printf("������һ����ʵ��x: ");
		if (scanf_s("%lf", &x) != 1) {
			printf("������Ч��������һ�����֡�\n");
			while (getchar() != '\n'); // ������뻺����
			continue;
		}
		if (x <= 0) {
			printf("x������һ����ʵ�������������롣\n");
			continue;
		}
		break;
	}

	// �������
	sum = calculateSeries(x, threshold, &termCount);

	// ������
	printf("\n�����ĺ�Ϊ: %.10f\n", sum);
	printf("�������� %d �\n", termCount);

	return 0;
}

// ���㼶���ĺ���
double calculateSeries(double x, double threshold, int* termCount) {
	double sum = 1.0;       // �ۼӺͣ���ʼΪ1����Ӧx^0 / 0!��
	double term = 1.0;      // ��ǰ���ֵ����ʼΪ1����Ӧx^0 / 0!��
	int n = 1;              // ��ǰ���ָ��

	while (1) {
		term *= x / n;      // ������һ�term = term * x / n
		if (fabs(term) < threshold) {
			break;
		}
		sum += term;
		printf("�� %d ��: %.10f����ǰ��: %.10f\n", n, term, sum);
		n++;
	}

	*termCount = n - 1; // ����ӵ�����
	return sum;
}