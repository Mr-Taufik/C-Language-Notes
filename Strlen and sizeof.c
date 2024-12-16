trlen 是一个标准库函数，定义在 <string.h> 头文件中。
用于计算一个以空字符 '\0' 结尾的 C 风格字符串的长度（即不包括终止的空字符）。
#include <string.h>

size_t strlen(const char *str);

#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, World!";
    size_t len = strlen(str);
    printf("字符串长度是：%zu\n", len); // 输出：字符串长度是：13
    return 0;
}

strlen 仅适用于以 '\0' 结尾的字符串。
如果传入的指针不是以 '\0' 结尾，strlen 会继续读取内存，直到遇到一个 '\0'，这可能导致未定义行为或程序崩溃。
strlen 计算的是字符数，不考虑字符串在内存中实际占用的字节数。

2. sizeof
定义：

sizeof 是一个编译时运算符，用于确定数据类型或变量在内存中所占的字节数。
功能：

返回一个对象或类型所占用的内存大小（以字节为单位）。
sizeof 是在编译时计算的，因此其值是一个常量，不会在运行时改变。
#include <stdio.h>

int main() {
    char c = 'A';
    int i = 100;
    double d = 3.14;
    char str[] = "Hello";

    printf("char 占用的字节数：%zu\n", sizeof(c));       // 输出：1
    printf("int 占用的字节数：%zu\n", sizeof(i));        // 输出：4（视具体平台而定）
    printf("double 占用的字节数：%zu\n", sizeof(d));     // 输出：8（视具体平台而定）
    printf("字符串数组占用的字节数：%zu\n", sizeof(str)); // 输出：6（包括终止的 '\0'）

    return 0;
}
对于数组，sizeof 返回整个数组的大小，而不是指向数组的指针的大小。
char arr[10];
printf("%zu\n", sizeof(arr)); // 输出：10
char *ptr = arr;
printf("%zu\n", sizeof(ptr)); // 输出：4 或 8（视平台而定）
对于指针，sizeof 返回指针本身的大小，而不是它所指向的数据的大小。
sizeof 不能用于动态分配的内存（如使用 malloc 分配的内存），因为它只能在编译时确定大小，而动态内存的大小在编译时未知。
  
具体示例比较
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "OpenAI";

    size_t length = strlen(str); // 计算字符串的长度，不包括 '\0'
    size_t size = sizeof(str);   // 计算整个数组的大小，包括 '\0'

    printf("strlen(str) = %zu\n", length); // 输出：6
    printf("sizeof(str) = %zu\n", size);   // 输出：7

    return 0;
}

使用 strlen：
当你需要知道字符串中实际的字符数（如遍历字符串、字符串操作等）时，使用 strlen。
使用 sizeof：
当你需要了解一个类型或变量在内存中占用的大小（如内存分配、数据对齐、序列化等）时，使用 sizeof。

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *dynamicStr = "Dynamic String";

    // 使用 strlen 计算字符串长度
    size_t len = strlen(dynamicStr);
    printf("字符串长度：%zu\n", len); // 输出：14

    // 使用 sizeof 计算指针大小
    size_t ptrSize = sizeof(dynamicStr);
    printf("指针大小：%zu\n", ptrSize); // 输出：4 或 8（视平台而定）

    // 使用 sizeof 计算整个数组的大小
    char arr[] = "Array String";
    size_t arrSize = sizeof(arr);
    printf("数组大小：%zu\n", arrSize); // 输出：13（包括 '\0'）

    return 0;
}




























