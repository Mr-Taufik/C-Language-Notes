#include <stdio.h>
#include <math.h>

int main() {
	int N;
	double sum = 0.0;

	// ��ʾ�û�����һ��������
	printf("������һ��������N������0���� ");
	scanf("%d", &N);

	// ��������Ƿ���Ч
	if (N <= 0) {
		printf("������Ч��N �������0��\n");
		return 1; // ��ֹ���򣬷��ش���״̬
	}

	int i = 1; // ��ʼ�����Ʊ���

	while (i <= N) { // �������
		sum += sqrt((double)i); // ����ƽ�������ۼ�
		i++; // ���¿��Ʊ���
	}

	printf("ǰ%d���ƽ����֮�͵��� %.6lf\n", N, sum);

	return 0;
}
/////����ѭ������Ҫ�ֶ���ֹ
//////////////////////////
#include <stdio.h>

int main() {
	int count = 0;

	while (1) { // ��ԶΪ�������
		printf("����һ������ѭ����ѭ��������%d\n", count);
		count++;

		if (count >= 10) { // �������ﵽ10ʱ���˳�ѭ��
			break;
		}
	}

	printf("ѭ��������\n");

	return 0;
}
//////////////////

#include <stdio.h>

int main() {
	int number;

	do {
		printf("������һ���������� ");
		scanf("%d", &number);

		if (number <= 0) {
			printf("������Ч�����������롣\n");
		}
	} while (number <= 0); // �������

	printf("��������������ǣ� %d\n", number);

	return 0;
}
///////////////////
///////////////
/////��do while�м�����ջ�����
#include <stdio.h>

int main() {
	int number;
	int result;

	do {
		printf("������һ���������� ");
		result = scanf("%d", &number);

		if (result != 1) {
			// scanf û�гɹ���ȡһ������
			printf("������Ч�����������롣\n");
			// ������뻺����
			while (getchar() != '\n' && getchar() != EOF);
			number = -1; // ����Ϊ��Чֵ�Լ���ѭ��
		}
		else if (number <= 0) {
			// ���������������Ҫ��
			printf("������Ч��������һ����������\n");
			// ������뻺����������ж�����ַ���
			while (getchar() != '\n' && getchar() != EOF);
		}
	} while (number <= 0);

	printf("��������������ǣ�%d\n", number);
	return 0;
}