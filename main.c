////结构体指针
#include <stdio.h>
#include <string.h>

// 定义一个结构体
struct Person {
     char name[50];
     int age;
};

int main() {
     struct Person person1;
     struct Person *ptr; // 结构体指针
     /*结构体变量和指针：创建了一个Person类型的变量person1和一个指向Person的指针ptr
      * 指针指向结构体：通过ptr = &person1;让指针指向person1
      * 访问成员：使用ptr->name和ptr->age访问和修改结构体的成员。*/

     // 给person1赋值
     strcpy(person1.name, "张三");
     person1.age = 30;

     // 让指针指向person1
     ptr = &person1;

     // 通过指针访问结构体成员
     printf("姓名: %s\n", ptr->name);
     printf("年龄: %d\n", ptr->age);

     // 修改结构体成员
     ptr->age = 31;
     printf("修改后的年龄: %d\n", person1.age);

     return 0;
}
