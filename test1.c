#include <stdio.h>

int main() {
	int array[] = { 2, 4, 6, 8, 10, 12, 14 };
	int size = sizeof(array) / sizeof(array[0]);
	int target;
	int index = 0;
	int found = 0;

	printf("������Ҫ���ҵ����֣� ");
	scanf_s("%d", &target);

	while (index < size) { // ѭ����������
		if (array[index] == target) {
			printf("���� %d �������е�λ���� %d��������0��ʼ����\n", target, index);
			found = 1;
			break; // �ҵ����˳�ѭ��
		}
		index++;
	}

	if (!found) {
		printf("���� %d ���������С�\n", target);
	}

	return 0;
}