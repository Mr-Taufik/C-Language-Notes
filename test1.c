#include <stdio.h>

int main()
{
	int num = 1;
	int* p = &num;

	*p = 100;

	printf("num = %d\n", num);

	char ch = 'a';
	char* q = &ch;
	*q = 'x';
	printf("ch = %c\n", ch);


	///�������͵Ĳ�����ͬ

	printf("%p\n", p);
	printf("%p\n", ch);
	printf("%p\n", p + 1); //pָ���������������ռ4���ֽڣ�����p+1���ĸ��ֽ�
	printf("%p\n", ch + 1);//qָ������ַ��� �ַ�ռ1���ֽڣ�����q+1��1���ֽ�

	//////p+1��
	return 0;
}