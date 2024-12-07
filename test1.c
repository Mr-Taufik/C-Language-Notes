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
