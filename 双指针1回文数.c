#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 函数声明
int is_palindrome(char *str);

int main()
{
    char line[100];
    
    printf("请输入一个字符串: ");
    if (fgets(line, sizeof(line), stdin) != NULL) {
        // 去除换行符
        size_t len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }

        if (is_palindrome(line)) {
            printf("是回文数。\n");
        } else {
            printf("不是回文数。\n");
        }
    } else {
        printf("输入错误。\n");
    }
    
    return 0;
}

// 使用双指针判断回文数的函数
int is_palindrome(char *str)
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // 跳过非字母数字字符（可选）
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        // 比较字符（忽略大小写）
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // 不是回文数
        }

        left++;
        right--;
    }

    return 1; // 是回文数
}
