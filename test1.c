#include <stdio.h>

int main()
{
	int array[5];
	// ���벿�֣�������0��4
	for (int i = 0; i < 5; i++)
	{
		printf("Enter number %d: ", i + 1);
		// ʹ�� scanf ���� scanf_s
		if (scanf_s("%d", &array[i]) != 1) {////scanf_s���Լ� scanf���ķ���ֵ�ǳɹ�ƥ�䲢��ֵ���������������
			///����������У�"%d" ������ȡһ����������������ɹ���ȡһ��������scanf_s �᷵�� 1��
			///���������Ч�����磬�û�����Ĳ�����������scanf_s �᷵��һ��С�� 1 ��ֵ��ͨ���� 0 �� EOF
			////if (scanf_s("%d", &array[i]) != 1) ��һ�е���˼�ǣ���� scanf_s ���ص�ֵ������ 1��˵��������Ч

			printf("������Ч��\n");
			return 1; // ��ǰ�˳�����
		}
	}

	printf("\n���ֽ��:\n");
	// �������
	for (int j = 0; j < 5; j++)
	{
		if (array[j] > 90)
		{
			printf("%d  A\n", array[j]);
		}
		else if (array[j] > 80 && array[j] <= 90)
		{
			printf("%d B\n", array[j]);
		}
		else if (array[j] > 70 && array[j] <= 80)
		{
			printf("%d C\n", array[j]);
		}
		else if (array[j] > 60 && array[j] <= 70)
		{
			printf("%d D\n", array[j]);
		}
		else
		{
			printf("%d F\n", array[j]); // ͨ��60����ΪF
		}
	}

	return 0;
}