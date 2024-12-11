这个代码解释了如何通过malloc去为数组分配内存
假如我不知道一个数字有多少位，但是我想要一个数组将它的每一位都存储起来，这个时候我的array就需要通过malloc来分配内存大小


#include <stdio.h>
#include <stdlib.h>

int main() {
    long number;
    int count = 0;

    printf("请输入一个数字: ");
    scanf_s("%ld", &number);

    long temp = number;

    // 处理数字为0的情况
    if (temp == 0) {
        count = 1;
    }
    else {
        // 计算数字的位数
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }

    // 动态分配数组   
    int* array = malloc(count * sizeof(int));
    if (array == NULL) {
        printf("内存分配失败\n");
        return 1;
    }

    // 提取每一位数字并存储到数组中
    temp = number;
    if (temp == 0) {
        array[0] = 0;
    }
    else {
        for (int i = count - 1; i >= 0; i--) {
            array[i] = temp % 10;
            temp /= 10;
        }
    }

    // 输出数组中的数字
    printf("数字的每一位是: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // 释放动态分配的内存
    free(array);

    return 0;
}

///////////////////////
sizeof(int)：

作用：sizeof 运算符用于获取类型或变量在内存中占用的字节数。
sizeof(int) 返回一个 int 类型在当前系统中所占的字节数，通常是 4 字节（但具体取决于编译器和系统架构）。
count * sizeof(int)：

作用：计算需要分配的总字节数。
如果 count 是数字的位数，比如 5，那么总共需要分配 5 * 4 = 20 字节（假设 int 是 4 字节）。
malloc(count * sizeof(int))：

作用：请求操作系统分配一块连续的内存区域，大小为 count * sizeof(int) 字节。
返回一个指向这块内存的指针，类型为 void*。
int *array =：

作用：将 malloc 返回的 void* 指针转换为 int* 类型，并将其赋值给指针变量 array。
这样，你就可以通过 array 这个指针来访问和操作分配的内存区域了。

使用malloc分配所需的内存，并将返回的void*指针转换为所需的类型。例如，分配一个包含 n 个 int 的数组：
int *array = (int *)malloc(n * sizeof(int));
//////////这个就是malloc的句法用法




