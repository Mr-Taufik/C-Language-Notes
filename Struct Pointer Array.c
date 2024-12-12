////结构体指针数组
#include <stdio.h>
#include <string.h>

typedef struct
{
     char name[50];
     int age;
}Person;

int main()
{
      Person person1, person2, person3;//声明结构体变量
      Person *ptrArray[3]; // 结构体指针数组

     // 给结构体变量赋值
     strcpy(person1.name, "张三");
     person1.age = 30;

     strcpy(person2.name, "李四");
     person2.age = 25;

     strcpy(person3.name, "王五");
     person3.age = 28;

     // 将指针指向各个结构体
     ptrArray[0] = &person1;
     ptrArray[1] = &person2;
     ptrArray[2] = &person3;

     // 通过指针数组访问和打印信息
     for(int i = 0; i < 3; i++)
     {
          printf("姓名: %s, 年龄: %d\n", ptrArray[i]->name, ptrArray[i]->age);
          //这里->就是指针指向那块区域，可以修改可以读取
     }

     return 0;
}

