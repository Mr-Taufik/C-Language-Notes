//��ת�ַ���
/*
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    // Ϊÿ���ַ���ָ������ڴ�
    char* str[SIZE] = { 0 };

    // �����ַ���
    for (int i = 0; i < SIZE; i++)
    {
        str[i] = (char*)malloc(sizeof(char) * 128); // Ϊÿ���ַ�������ռ�
        if (str[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1; // ����ڴ����ʧ�ܣ��˳�����
        }
        scanf_s("%s", str[i], 128);
        // ʹ�� %s ��ȡ�ַ�����ע�����Ƴ���
        
    }

    // �����ַ���
    char* t;
    for (int i = 0; i < SIZE / 2; i++)
    {
        t = str[i];
        str[i] = str[SIZE - 1 - i];
        str[SIZE - 1 - i] = t;
    }

    // ����ַ���
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s ", str[i]);
    }

    // �ͷŷ�����ڴ�
    for (int i = 0; i < SIZE; i++)
    {
        free(str[i]);
    }

    return 0;
}
*/

//�ַ�����������

#include <stdio.h>
#include <stdlib.h>

void reverse(char* begin, char* end)
{
    int ch;
    while (begin < end) {
        ch = *begin;
        *begin = *end;
        *end = ch;
        begin++;
        end--;
    }
}

int main()
{
    char* str = (char*)malloc(sizeof(char) * 128);
    if (str == NULL) {  // ����ڴ�����Ƿ�ɹ�
        printf("Memory allocation failed!\n");
        return 1;
    }

    int i = 0;
    char ch;

    // ����ֱ�����з�
    while ((ch = getchar()) != '\n') {
        str[i++] = ch;
    }

    str[i] = '\0';  // �ַ���ĩβ��ӽ�����

    // ��ת�����ַ���
    reverse(str, str + i - 1);

    char* begin = str;
    char* end = str;

    // �����ַ�������תÿ������
    while (*end != '\0') {
        if (*end == ' ') {
            reverse(begin, end - 1);  // ��תÿ������
            begin = end + 1;  // ���¶�λ���ʵĿ�ʼ
        }
        end++;
    }

    // ���һ�����ʵķ�ת
    reverse(begin, end - 1);

    // �����ת����ַ���
    printf("%s\n", str);

    // �ͷ��ڴ�
    free(str);

    return 0;
}




