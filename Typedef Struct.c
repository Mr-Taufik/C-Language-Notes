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
     Student student1; //这里就不需要写struct关键字了
     strcpy(student1.name, "taozk");
     student1.age = 18;
     student1.gpa = 3.9f;

     printf("学生姓名: %s\n", student1.name);
     printf("学生年龄: %d\n", student1.age);
     printf("学生GPA: %.2f\n", student1.gpa);
     return 0;
}
