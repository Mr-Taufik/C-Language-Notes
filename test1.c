//����Ľ�������ʾ��
/*
#include <stdio.h>


void swap(int x, int y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a = 1, b = 2;

	swap(a, b);///��������Ǵ���ģ������潻������swap��������x��y��ֵ��
	//���һ��ں������������Ժ��ͷŵ�
	//���Ҫ����ʵ�ε�ֵ������Ҫ�����ַ
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
*/

#include <stdio.h>


void swap(int *x, int *y)///��������Ǻű�ʾ����x��y��һ��ָ��
{///x��y�������a��b�ĵ�ַ
	int t = *x; //�������*ָ����ȡֵ����˼�������Ҳһ��������ȡֵ����˼
	*x = *y;    
	*y = t;
}

int main()
{
	int a = 1, b = 2;

	swap(&a, &b);//���ﴫ����ǵ�ַ
	printf("a = %d, b = %d\n", a, b);
	return 0;
}