#include <stdio.h>

// ����������ͨ��ָ���޸ı�����ֵ
void increment(int* num);

int main() {
	int a = 5;
	printf("��������ǰ��a = %d\n", a); // �����5

	increment(&a); // ����a�ĵ�ַ

	printf("�������ú�a = %d\n", a); // �����6

	return 0;
}

void increment(int* num) {
	(*num)++; // ͨ��ָ���޸ı�����ֵ
}


////////////////
#include <stdio.h>

// ����������������������
void swap(int* a, int* b);

int main() {
	int x = 10;
	int y = 20;

	printf("����ǰ: x = %d, y = %d\n", x, y); // �����10, 20

	swap(&x, &y); // ����x��y�ĵ�ַ

	printf("������: x = %d, y = %d\n", x, y); // �����20, 10

	return 0;
}

void swap(int* a, int* b) {
	int temp = *a; // temp = x
	*a = *b;       // x = y
	*b = temp;     // y = temp
}
/////////////////////
#include <stdio.h>

// ������������������
void calculate(int a, int b, int* sum, int* diff);

int main() {
	int num1, num2;
	int sum, difference;

	printf("��������������: ");
	scanf("%d %d", &num1, &num2);

	calculate(num1, num2, &sum, &difference);

	printf("�� = %d, �� = %d\n", sum, difference);

	return 0;
}

void calculate(int a, int b, int* sum, int* diff) {
	*sum = a + b;
	*diff = a - b;
}
