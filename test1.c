#include <stdio.h>

// ������������������׳�
unsigned long long fact(int n);

int main() {
	int number;
	unsigned long long result;

	while (1) {
		printf("������һ���Ǹ����� (����-1�˳�): ");
		if (scanf_s("%d", &number) != 1) {
			printf("������Ч��������һ��������\n");
			// ������뻺����
			while (getchar() != '\n');
			continue;
		}

		if (number == -1) {
			printf("�˳�����\n");
			break;
		}

		if (number < 0) {
			printf("������Ч��������һ���Ǹ�������\n");
			continue;
		}

		result = fact(number);
		printf("%d �Ľ׳��� %llu\n", number, result);
	}

	return 0;
}
unsigned long long fact(int n) {
	unsigned long long result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
		///���д���������ǽ���ǰ�� result ֵ����ѭ������ i��
		///���������ֵ�� result
	}
	return result;
}