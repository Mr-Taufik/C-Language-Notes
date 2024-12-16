1. toupper 函数
用途：将一个字符转换为对应的大写字母。如果该字符已经是大写字母或不是字母，则不做改变。
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'a';
    char upper = toupper(ch);
    printf("大写字母: %c\n", upper); // 输出: A
    return 0;
}

2. tolower 函数
  用途：将一个字符转换为对应的小写字母。如果该字符已经是小写字母或不是字母，则不做改变
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'A';
    char lower = tolower(ch);
    printf("小写字母: %c\n", lower); // 输出: a
    return 0;
}

3. isupper 函数
用途：检查一个字符是否为大写字母
返回值：

非零值（通常为 1）：如果字符是大写字母。
0：否则。
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'B';
    if (isupper(ch)) {
        printf("%c 是大写字母。\n", ch);
    } else {
        printf("%c 不是大写字母。\n", ch);
    }
    return 0;
}

4. islower 函数
返回值：

非零值（通常为 1）：如果字符是小写字母。
0：否则

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'g';
    if (islower(ch)) {
        printf("%c 是小写字母。\n", ch);
    } else {
        printf("%c 不是小写字母。\n", ch);
    }
    return 0;
}

5. isalpha 函数
用途：检查一个字符是否为字母（不区分大小写）
返回值：

非零值（通常为 1）：如果字符是字母。
0：否则。
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = '1';
    if (isalpha(ch)) {
        printf("%c 是字母。\n", ch);
    } else {
        printf("%c 不是字母。\n", ch);
    }
    return 0;
}


使用这些函数的注意事项
参数类型：这些函数通常接受 int 类型的参数，但通常传入的是 char 类型的变量。确保传入的字符在 unsigned char 范围内或为 EOF，以避免未定义行为。

返回值处理：对于判断函数（如 isupper、islower、isalpha），返回值非零表示真，0 表示假。可以直接在条件语句中使用。

包含头文件：使用这些函数时，必须包含 <ctype.h> 头文件。










