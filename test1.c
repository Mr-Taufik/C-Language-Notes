
//�������

#include <stdio.h>


int main()
{
	int numbers;
	printf("����һ�����֣� ");
	scanf_s("%d", &numbers);
	do
	{
		printf("%d ", numbers % 10);//�����Ǽ���numbers����10������
		numbers = numbers / 10;//��������������ȡ����Ҳ���Ƕ���С�����֣�����ʹ����Ǹ�����Ҳ������ȡ������ӽ�������

	} while (numbers % 10 != 0);//���ﵱnumbers����10�������ʱ��ѭ������ĳ���
	return 0;
}

