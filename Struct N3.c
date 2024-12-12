函数中使用结构体指针和结构体指针数组
将结构体指针和结构体指针数组作为函数参数，可以使代码更加模块化和可重用。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

// 函数：初始化一个Person
void initPerson(struct Person *p, const char *name, int age) {
    strcpy(p->name, name);
    p->age = age;
}

// 函数：打印一个Person
void printPerson(const struct Person *p) {
    printf("姓名: %s, 年龄: %d\n", p->name, p->age);
}

// 函数：批量打印Person数组
void printPersonsArray(struct Person **array, int size) {
    for(int i = 0; i < size; i++) {
        printPerson(array[i]);
    }
}

int main() {
    int n = 3;
    struct Person *persons[3];

    // 初始化Person
    for(int i = 0; i < n; i++) {
        persons[i] = malloc(sizeof(struct Person));
        if(persons[i] == NULL) {
            printf("内存分配失败！\n");
            return 1;
        }
        char name[50];
        int age;
        printf("请输入第 %d 个姓名: ", i+1);
        scanf("%s", name);
        printf("请输入第 %d 个年龄: ", i+1);
        scanf("%d", &age);
        initPerson(persons[i], name, age);
    }

    // 打印所有Person
    printf("\n所有人员信息:\n");
    printPersonsArray(persons, n);

    // 释放内存
    for(int i = 0; i < n; i++) {
        free(persons[i]);
    }

    return 0;
}


结构体指针允许你高效地访问和修改结构体成员，适用于需要频繁传递和操作结构体的场景。
结构体指针数组可以存储多个结构体的地址，方便批量管理多个结构体对象，适用于需要处理多个相似结构体的情况。
进阶应用包括动态内存分配、多级指针、在数据结构中的应用以及函数中的使用，帮助你在复杂项目中灵活运用结构体指针和结构体指针数组
