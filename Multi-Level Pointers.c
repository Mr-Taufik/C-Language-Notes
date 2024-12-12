//在C语言中，指针是一个非常重要的概念，它允许程序员直接操作内存地址。
//多级指针（也称为指针的指针）是在指针的基础上进一步扩展的概念，允许你间接地访问和操作指针本身。
//多级指针是指向指针的指针，即一个指针变量存储的是另一个指针的地址。常见的多级指针有二级指针、三级指针等
用途：

动态分配多维数组。
在函数中修改指针的值（如分配内存后修改原指针）。
实现复杂的数据结构，如链表、树等。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1 = {"张三", 30};
    struct Person person2 = {"李四", 25};

    // 多级指针
    struct Person *ptr1 = &person1;
    struct Person *ptr2 = &person2;
    struct Person **multiPtr = &ptr1;

    // 访问数据
    printf("通过多级指针访问: %s, %d\n", (*multiPtr)->name, (*multiPtr)->age);

    // 指向指针数组
    struct Person *ptrArray[2] = {ptr1, ptr2};
    struct Person **ptrToArray = ptrArray;

    printf("通过指针数组访问: %s, %d\n", ptrToArray[1]->name, ptrToArray[1]->age);

    return 0;
}

multiPtr 是一个二级指针（多级指针），类型为 struct Person **。
它存储的是指针 ptr1 的地址，即 ptr1 的地址是 multiPtr 指向的内容。
*multiPtr 解引用 multiPtr，得到 ptr1（即 struct Person *）。
(*multiPtr)->name 等价于 ptr1->name，访问 person1 的 name。
同理，(*multiPtr)->age 访问 person1 的 age。
ptrArray[0] ----> person1
ptrArray[1] ----> person2
ptrToArray --> ptrArray[0]

ptrToArray[1] 等价于 *(ptrToArray + 1)，即 ptrArray[1]，它指向 person2。
ptrToArray[1]->name 访问 person2 的 name。
ptrToArray[1]->age 访问 person2 的 age。






















