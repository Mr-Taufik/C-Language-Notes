#include <stdio.h>
#include <math.h>

// �������������㽻������ǰn��ĺ�
double calculateAlternatingSum(int n);

int main() {
	int n;
	double sum;

	
	printf("������Ҫ��������� n: ");
	if (scanf_s("%d", &n) != 1 || n <= 0) {/////scanf_s ���سɹ���ȡ������������ɹ���ȡһ��������
		/////����ֵΪ 1�������ȡʧ�ܣ������û������˷�����ֵ��������ֵ��С�� 1
		printf("������һ����������\n");
		return 1;//�����д��ֻ�ܼ���������һ�Σ����һ���Ϊreturn1���˳���ǰ�ĳ���
	}

	// �����
	sum = calculateAlternatingSum(n);


	printf("��������ǰ %d ��ĺ�Ϊ: %.6f\n", n, sum);

	return 0;
}


double calculateAlternatingSum(int n) {
	double sum = 0.0;
	int k;
	double term;
	int sign;

	for (k = 1; k <= n; k++) {
		// ������ţ�������Ϊ����ż����Ϊ��
		sign = (k % 2 == 1) ? 1 : -1;
		//��Ԫ�����
		//�﷨��ʽ������ ? ֵ1 : ֵ2
		//��� ���� Ϊ �棬�������ʽ�Ľ���� ֵ1����� ���� Ϊ �٣������ ֵ2

		//��� k �Ƿ�Ϊ������

		//k % 2 == 1 �᷵�� �� ��� k ������������ �� ��� k ��ż����
			//���� k ����ż�Ը�ֵ�� sign��

			//��� k ������(k % 2 == 1 Ϊ ��)���� sign ����ֵΪ 1��
			//��� k ��ż��(k % 2 == 1 Ϊ ��)���� sign ����ֵΪ - 1
		// ���㵱ǰ��
		term = sign * ((double)k / (2.0 * k - 1.0));

		// �ۼӵ��ܺ�
		sum += term;
	}

	return sum;
}
