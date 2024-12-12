////结构体数组，以存储多个结构体变量
#include <stdio.h>
#include <string.h>

//为了简化结构体类型的使用，可以结合typedef关键字
//这样定义后，你可以直接使用Student作为类型名，无需每次都写struct关键字
typedef struct
{
     char name[50];
     int age;
     float gpa;
}Student;
int main()
{
    Student students[3];
    // 初始化第一个学生
    strcpy(students[0].name, "张三");
    students[0].age = 20;
    students[0].gpa = 3.8;

    // 初始化第二个学生
    strcpy(students[1].name, "李四");
    students[1].age = 22;
    students[1].gpa = 3.5;

    // 初始化第三个学生
    strcpy(students[2].name, "王五");
    students[2].age = 21;
    students[2].gpa = 3.9;

    for(int i = 0; i < 3; i++) 
    {
         printf("学生%d姓名: %s\n", i+1, students[i].name);
         printf("学生%d年龄: %d\n", i+1, students[i].age);
         printf("学生%dGPA: %.2f\n\n", i+1, students[i].gpa);
    }

     return 0;
}
