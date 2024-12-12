////结构体指针数组和多级指针（指向指针的指针）理解这两者的区别对于编写复杂的数据结构（如链表、树等）非常重要
#include <stdio.h>


struct Person
{
     char name[50];
     int age;
};

int main()
{
     struct Person person1 = { "Joe", 30 };
     struct Person person2 = { "Jack", 25 };

     // 多级指针
     struct Person *ptr1 = &person1;
     struct Person *ptr2 = &person2;
     struct Person **multiPtr = &ptr1;
     // multiPtr 是一个二级指针（多级指针），类型为 struct Person **。
     // 它存储的是指针 ptr1 的地址，即 ptr1 的地址是 multiPtr 指向的内容。

     // 访问数据
     printf( "通过多级指针访问: %s, %d\n", ( *multiPtr )->name, ( *multiPtr )->age );
     //*multiPtr 解引用 multiPtr，得到 ptr1（即 struct Person *）。
     //(*multiPtr)->name 等价于 ptr1->name，访问 person1 的 name。
     // 同理，(*multiPtr)->age 访问 person1 的 age。
     // 指向指针数组


     struct Person *ptrArray[2] = { ptr1, ptr2 };
     struct Person **ptrToArray = ptrArray;
     //ptrArray 是一个包含两个 struct Person * 元素的数组，分别指向 person1 和 person2。
     //ptrToArray 是一个 struct Person ** 类型的指针，指向 ptrArray 的首元素（即 ptr1 的地址
     //ptrArray[0] ----> person1
     //ptrArray[1] ----> person2
     //ptrToArray --> ptrArray[0]
     // ptrToArray[1] 等价于 *(ptrToArray + 1)，即 ptrArray[1]，它指向 person2。
     // ptrToArray[1]->name 访问 person2 的 name。
     // ptrToArray[1]->age 访问 person2 的 age。


     printf( "通过指针数组访问: %s, %d\n", ptrToArray[1]->name, ptrToArray[1]->age );

     return 0;
}
