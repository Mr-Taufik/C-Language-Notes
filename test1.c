#include <stdio.h>
#include <stdlib.h>

int main() {
    long number;
    int count = 0;

    printf("������һ������: ");
    scanf_s("%ld", &number);

    long temp = number;

    // ��������Ϊ0�����
    if (temp == 0) {
        count = 1;
    }
    else {
        // �������ֵ�λ��
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }

    // ��̬��������
    int* array = malloc(count * sizeof(int));
    if (array == NULL) {
        printf("�ڴ����ʧ��\n");
        return 1;
    }

    // ��ȡÿһλ���ֲ��洢��������
    temp = number;
    if (temp == 0) {
        array[0] = 0;
    }
    else {
        for (int i = count - 1; i >= 0; i--) {
            array[i] = temp % 10;
            temp /= 10;
        }
    }

    // ��������е�����
    printf("���ֵ�ÿһλ��: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // �ͷŶ�̬������ڴ�
    free(array);

    return 0;
}
