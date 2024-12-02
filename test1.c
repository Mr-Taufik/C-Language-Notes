/*
这个可以输入带空格的字符串
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 为字符串分配内存
    char* str = (char*)malloc(128);

    // 检查 malloc 是否成功
    if (str == NULL) 
    {
        printf("内存分配失败！\n");
        return 1;  // 返回错误
    }

    char ch;
    int i = 0;

    // 读取字符直到换行符
    while ((ch = getchar()) != '\n') 
    {
        *(str + i++) = ch;
    }

    // 确保字符串结尾是 '\0'
    *(str + i) = '\0';

    // 输出读取的字符串
    printf("%s\n", str);

    // 释放分配的内存
    free(str);

    return 0;
}

*/


#include <stdio.h>
#include <stdlib.h>

// 函数声明：用于删除字符串中的空格
void remove_spaces(char* str);

int main()
{
    // 动态分配 128 字节的内存用于存储字符串
    char* str = (char*)malloc(128);

    // 检查 malloc 是否成功
    if (str == NULL)
    {
        printf("内存分配失败！\n");
        return 1;  // 返回错误代码
    }

    printf("请输入字符串（按回车结束）：");
    char ch;
    int i = 0;

    // 从标准输入读取字符，直到遇到换行符或达到内存限制
    while ((ch = getchar()) != '\n' && i < 127)
    {
        *(str + i++) = ch;  // 将字符存储到分配的内存中，并递增索引
    }
    *(str + i) = '\0';  // 添加字符串结束符

    // 删除字符串中的空格
    remove_spaces(str);

    printf("删除空格后的字符串：'%s'\n", str);

    free(str);  // 释放内存

    return 0;
}

// 删除空格的函数实现，使用双指针法
void remove_spaces(char* str)
{
    char* read = str;   // 读取指针，用于遍历原字符串
    char* write = str;  // 写入指针，用于构建新字符串

    while (*read != '\0')
    {
        if (*read != ' ')
        {
            *write = *read;  // 复制非空格字符
            write++;         // 移动写指针
        }
        read++;             // 移动读指针
    }
    *write = '\0';          // 添加字符串结束符
}
