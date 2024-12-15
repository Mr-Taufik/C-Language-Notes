//scanf：在读取输入时，scanf 会跳过任何前导空白字符（如空格、制表符和换行符），
//但它不会自动清除输入缓冲区中的剩余字符，尤其是当输入格式不完全匹配时。例如，读取整数后，输入行中的换行符 \n 会留在缓冲区中。
//fgets：fgets 会读取包括换行符在内的所有字符，
//直到遇到换行符、文件结束符或达到指定的字符数限制。
//如果前一个输入操作（如 scanf）留下了换行符，fgets 会立即读取到这个换行符，导致看似“跳过”了输入
//当你在程序中混合使用 scanf 和 fgets 时，常常会遇到缓冲区中残留的换行符问题。例如
#include <stdio.h>

int main() 
{
    int age;
    char name[50];

    printf("请输入年龄：");
    scanf("%d", &age); // 读取整数，但不会读取换行符

    printf("请输入姓名：");
    fgets(name, sizeof(name), stdin); // 立即读取到之前的换行符

    printf("年龄：%d，姓名：%s\n", age, name);
    return 0;
}
////在上述代码中，fgets 会立即读取到 scanf 后残留的 \n，导致 name 变量中只包含一个换行符，而不是用户实际输入的姓名。

////何时需要清除缓冲区？
//在使用 scanf 后：如果你在使用 scanf 读取输入后打算使用 fgets，需要清除缓冲区中的残留字符（通常是 \n）。
//当输入超过缓冲区大小时：如果输入的数据超过了缓冲区大小，fgets 只会读取部分内容，
//剩余的数据会留在缓冲区中，可能影响后续的输入操作。
//在需要精确控制输入时：确保每次读取输入前，缓冲区是干净的，以避免意外读取到之前的残留字符。


#include <stdio.h>

void clear_input_buffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() 
{
    int age;
    char name[50];

    printf("请输入年龄：");
    if (scanf("%d", &age) != 1) 
    {
        printf("输入错误。\n");
        clear_input_buffer(); // 清理缓冲区
        return 1;
    }

    clear_input_buffer(); // 清理 `scanf` 后的换行符

    printf("请输入姓名：");
    if (fgets(name, sizeof(name), stdin) != NULL) 
    {
        // 去除换行符
        name[strcspn(name, "\n")] = '\0';
        printf("年龄：%d，姓名：%s\n", age, name);
    } else 
    {
        printf("读取输入时发生错误。\n");
    }

    return 0;
}

///////clear_input_buffer 函数通过循环读取并丢弃所有字符，直到遇到换行符 \n 或文件结束符 EOF。
在 scanf 之后调用 clear_input_buffer，以清除输入缓冲区中残留的 \n。

#include <stdio.h>
#include <string.h>

int main()
{
     char name[10];

     fgets(name, sizeof(name), stdin);
     printf("%s", name);
     name[strcspn(name, "\n")] = '\0';
     return 0;
}
//这个方法用于清理已经读取的字符串中的换行符（\n）。
strcspn函数会返回字符串name中第一个出现\n的位置的索引。
然后将该位置的字符替换为字符串结束符\0，有效地移除了换行符。
使用场景：

通常在使用fgets读取输入后使用。fgets会将输入的换行符也包含在读取的字符串中，
这可能不需要或不希望保留。因此，通过这种方式可以去除末尾的换行符。

#include <stdio.h>

// 函数声明
void clear_input_buffer(void);

// 函数定义
void clear_input_buffer(void) 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // 继续读取并忽略剩余的字符
    }
}

int main() {
    char name[100];
    
    printf("请输入你的名字: ");
    if (fgets(name, sizeof(name), stdin)) {
        // 移除换行符
        name[strcspn(name, "\n")] = '\0';
    }

    // 清理输入缓冲区，确保没有残留的输入
    clear_input_buffer();

    printf("你好, %s!\n", name);
    
    return 0;
}
















