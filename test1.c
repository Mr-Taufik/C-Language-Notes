///Ұָ��
/*
#include <stdio.h>

int main()
{
	int* p;
	*p = 100;  /// �δ��󣬷����˲��ܷ��ʵ��ڴ棬���p����Ұָ��
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	int* p = NULL;//��ָ������û�����ģ�Ҳ����ʹ��
	return 0;
}
*/

///////////////////
//��κϷ���ʹ���ڴ�
//1 ϵͳ�����ڴ�
#include <stdio.h>
#include <stdlib.h>   ///�����ڴ��ʱ����Ҫ������ͷ�ļ�
int main()
{
	// 1 ϵͳ�����ڴ棻
	int a;
	int* p1 = &a;
	//2 �û������ڴ� ��ָ���Ƕ��ڴ棩//��̬�ڴ����룬���е�ʱ��Ż�����ڴ����
	char* str = (char*)malloc(32);
	//str�Լ������а˸��ֽڣ���˸��ֽڴ�����������ڴ���׵�ַ��str��Ϊָ��ָ�������32����ڴ�
	free(str);  ///�ͷ��ڴ� ������ͷţ�������ڴ�й¶
	//�ֶ�������ڴ�һ��Ҫ�ֶ��ͷŵ�
	str = NULL; //�ͷ��ڴ��Ժ��������ڿգ���Ȼ����Ұָ��
	return 0;
}