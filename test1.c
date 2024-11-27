#include <stdio.h>

// ��������
void findMaxMin(int arr[], int size, int* max, int* min);

int main()
{
    int arr[10];
    int max, min;

    printf("����10�����֣�\n");

    // ����10������
    for (int i = 0; i < 10; i++)
    {
        if (scanf_s("%d", &arr[i]) != 1) {
            printf("�������\n");
            return 1;
        }
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    // ��ʼ�� max �� min Ϊ��һ��Ԫ��
    max = arr[0];
    min = arr[0];

    // ���ú����������ֵ����Сֵ
    findMaxMin(arr, size, &max, &min);

    printf("The Max number is %d, Min number is %d\n", max, min);
    return 0;
}

void findMaxMin(int arr[], int size, int* max, int* min)
{
    for (int i = 1; i < size; i++)  // �ӵڶ���Ԫ�ؿ�ʼ
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }

        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}




#include <stdio.h>

// �����������������ֵ����Сֵ
void findMaxMin(int arr[], int size, int* max, int* min);

int main() {
    int numbers[] = { 23, 45, 12, 67, 34, 89, 2, 78 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maximum, minimum;

    findMaxMin(numbers, size, &maximum, &minimum);

    printf("���ֵ = %d, ��Сֵ = %d\n", maximum, minimum);

    return 0;
}

void findMaxMin(int arr[], int size, int* max, int* min) {
    if (size <= 0) {
        *max = *min = 0;
        return;
    }

    *max = *min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
