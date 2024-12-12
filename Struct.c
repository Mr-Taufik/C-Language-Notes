#include <stdio.h>
#include <string.h>
#include <stdlib.h>

////使用struct关键字来定义一个结构体。例如，定义一个表示学生的结构体：
////定义了一个名为Student的结构体，包含姓名、年龄和GPA三个成员
struct Student
{
     int id;
     char name[32];
     char sex;
};

int main()
{
    struct Student s1;//声明并初始化一个结构体变量
    struct Student s2 = {2, "jack", 'm'};

    //这种是一次性输入，可以在声明结构体变量时同时进行初始化
    //// 给结构体成员赋值
    ////使用strcpy函数将字符串"张三"复制到s1的name成员中。

    strcpy(s1.name, "joe");
    s1.id = 1;
    s1.sex ='m';

    printf("Student 's id is %d\n"
            "Student 's name is %s\n"
            "Student 's sex is%c", s2.id, s2.name,s2.sex );

     return 0;
}
