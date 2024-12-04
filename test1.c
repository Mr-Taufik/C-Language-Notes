//反转字符串
/*
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    // 为每个字符串指针分配内存
    char* str[SIZE] = { 0 };

    // 输入字符串
    for (int i = 0; i < SIZE; i++)
    {
        str[i] = (char*)malloc(sizeof(char) * 128); // 为每个字符串分配空间
        if (str[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1; // 如果内存分配失败，退出程序
        }
        scanf_s("%s", str[i], 128);
        // 使用 %s 读取字符串，注意限制长度
        
    }

    // 交换字符串
    char* t;
    for (int i = 0; i < SIZE / 2; i++)
    {
        t = str[i];
        str[i] = str[SIZE - 1 - i];
        str[SIZE - 1 - i] = t;
    }

    // 输出字符串
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s ", str[i]);
    }

    // 释放分配的内存
    for (int i = 0; i < SIZE; i++)
    {
        free(str[i]);
    }

    return 0;
}
*/

//字符串单词逆序

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
    if (str == NULL) {  // 检查内存分配是否成功
        printf("Memory allocation failed!\n");
        return 1;
    }

    int i = 0;
    char ch;

    // 输入直到换行符
    while ((ch = getchar()) != '\n') {
        str[i++] = ch;
    }

    str[i] = '\0';  // 字符串末尾添加结束符

    // 反转整个字符串
    reverse(str, str + i - 1);

    char* begin = str;
    char* end = str;

    // 遍历字符串并反转每个单词
    while (*end != '\0') {
        if (*end == ' ') {
            reverse(begin, end - 1);  // 反转每个单词
            begin = end + 1;  // 重新定位单词的开始
        }
        end++;
    }

    // 最后一个单词的反转
    reverse(begin, end - 1);

    // 输出反转后的字符串
    printf("%s\n", str);

    // 释放内存
    free(str);

    return 0;
}




