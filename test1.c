/*
�������������ո���ַ���
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ϊ�ַ��������ڴ�
    char* str = (char*)malloc(128);

    // ��� malloc �Ƿ�ɹ�
    if (str == NULL) 
    {
        printf("�ڴ����ʧ�ܣ�\n");
        return 1;  // ���ش���
    }

    char ch;
    int i = 0;

    // ��ȡ�ַ�ֱ�����з�
    while ((ch = getchar()) != '\n') 
    {
        *(str + i++) = ch;
    }

    // ȷ���ַ�����β�� '\0'
    *(str + i) = '\0';

    // �����ȡ���ַ���
    printf("%s\n", str);

    // �ͷŷ�����ڴ�
    free(str);

    return 0;
}

*/


#include <stdio.h>
#include <stdlib.h>

// ��������������ɾ���ַ����еĿո�
void remove_spaces(char* str);

int main()
{
    // ��̬���� 128 �ֽڵ��ڴ����ڴ洢�ַ���
    char* str = (char*)malloc(128);

    // ��� malloc �Ƿ�ɹ�
    if (str == NULL)
    {
        printf("�ڴ����ʧ�ܣ�\n");
        return 1;  // ���ش������
    }

    printf("�������ַ��������س���������");
    char ch;
    int i = 0;

    // �ӱ�׼�����ȡ�ַ���ֱ���������з���ﵽ�ڴ�����
    while ((ch = getchar()) != '\n' && i < 127)
    {
        *(str + i++) = ch;  // ���ַ��洢��������ڴ��У�����������
    }
    *(str + i) = '\0';  // ����ַ���������

    // ɾ���ַ����еĿո�
    remove_spaces(str);

    printf("ɾ���ո����ַ�����'%s'\n", str);

    free(str);  // �ͷ��ڴ�

    return 0;
}

// ɾ���ո�ĺ���ʵ�֣�ʹ��˫ָ�뷨
void remove_spaces(char* str)
{
    char* read = str;   // ��ȡָ�룬���ڱ���ԭ�ַ���
    char* write = str;  // д��ָ�룬���ڹ������ַ���

    while (*read != '\0')
    {
        if (*read != ' ')
        {
            *write = *read;  // ���Ʒǿո��ַ�
            write++;         // �ƶ�дָ��
        }
        read++;             // �ƶ���ָ��
    }
    *write = '\0';          // ����ַ���������
}
