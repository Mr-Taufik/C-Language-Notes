#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 9) { // ���ѭ������
        int j = 1;
        while (j <= 9) { // �ڲ�ѭ������
            printf("%d*%d=%2d\t", i, j, i * j);
            j++;
        }
        printf("\n"); // ����
        i++;
    }

    return 0;
}