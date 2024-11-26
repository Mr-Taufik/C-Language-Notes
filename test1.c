#include <stdio.h>
#include <stdlib.h>

// ð��������
void bubbleSort(int arr[], int size);
int main()
{
	int N;

	// ����ѭ����ȷ���û�������Ч��N > 1
	while (1)
	{
		printf("������Ҫ�������������������1���� ");
		if (scanf_s("%d", &N) != 1)
		{
			printf("������Ч��������һ��������\n");
			// ������뻺����
			while (getchar() != '\n');
			continue;
		}
		if (N > 1)
		{
			break;
		}
		printf("N �������1�����������롣\n");
	}

	// ��̬��������
	int* numbers = (int*)malloc(N * sizeof(int));
	if (numbers == NULL)
	{
		printf("�ڴ����ʧ�ܡ�\n");
		return 1;
	}

	// ����N������
	printf("������ %d ��������\n", N);
	for (int i = 0; i < N; i++)
	{
		while (1)
		{
			if (scanf_s("%d", &numbers[i]) != 1)
			{
				printf("������Ч��������һ��������\n");
				// ������뻺����
				while (getchar() != '\n');
				continue;
			}
			break;
		}
	}

	// ����
	bubbleSort(numbers, N);

	// ��������Ľ��
	printf("�����Ľ���ǣ�");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");

	// �ͷŶ�̬������ڴ�
	free(numbers);

	return 0;
}
void bubbleSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				// ���� arr[j] �� arr[j + 1]
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
