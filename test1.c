#include <stdio.h>

int main() {
	char operator;
	double num1, num2;
	int continueCalc = 1;

	while (continueCalc) {
		
		printf("����������� (+, -, *, /) ������ 'q' �˳��� ");
		scanf_s(" %c", &operator); // ע��ǰ��Ŀո����������κ�ǰ���հ��ַ�

		if (operator == 'q' || operator == 'Q') {
			printf("�˳���������\n");
			break; // �˳�ѭ��
		}

		// ��ʾ�û���������������
		printf("�������������֣� ");
		if (scanf_s("%lf %lf", &num1, &num2) != 2) {
			printf("������Ч���������������֡�\n");
			// ������뻺����
			while (getchar() != '\n');
			continue; // ���¿�ʼѭ��
		}

		// ִ�м���
		switch (operator) {
		case '+':
			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
			break;
		case '-':
			printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
			break;
		case '*':
			printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
			break;
		case '/':
			if (num2 == 0) {
				printf("���󣺳�������Ϊ�㡣\n");
			}
			else {
				printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
			}
			break;
		default:
			printf("δ֪���������\n");
		}

		// ѯ���û��Ƿ����
		printf("�Ƿ�������㣿(1: ��, 0: ��)�� ");
		if (scanf_s("%d", &continueCalc) != 1 || (continueCalc != 0 && continueCalc != 1)) {
			printf("������Ч��Ĭ���˳���\n");
			break;
		}
	}

	printf("��лʹ�ü�������\n");

	return 0;
}
