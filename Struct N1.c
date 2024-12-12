////结构体指针数组在数据结构中的应用
////结构体指针数组可以用于实现更复杂的数据结构，如链表、栈、队列等。
/// 以下是一个简单的例子，展示如何使用结构体指针数组实现一个动态数组管理多个结构体。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
     char name[50];
     int age;
};

// 函数：添加一个Person到数组
void addPerson( struct Person ***array, int *size, const char *name, int age )
{
     // 重新分配内存
     struct Person **temp = realloc( *array, ( *size + 1 ) * sizeof( struct Person * ) );
     if ( temp == NULL )
     {
          printf( "内存分配失败！\n" );
          return;
     }
     *array = temp;

     // 分配新Person
     ( *array )[*size] = malloc( sizeof( struct Person ) );
     if ( ( *array )[*size] == NULL )
     {
          printf( "内存分配失败！\n" );
          return;
     }

     // 赋值
     strcpy( ( *array )[*size]->name, name );
     ( *array )[*size]->age = age;
     ( *size )++;
}

// 函数：打印所有Person
void printPersons( struct Person **array, int size )
{
     for ( int i = 0; i < size; i++ )
     {
          printf( "姓名: %s, 年龄: %d\n", array[i]->name, array[i]->age );
     }
}

int main()
{
     struct Person **persons = NULL;
     int count = 0;

     // 添加Person
     addPerson( &persons, &count, "张三", 30 );
     addPerson( &persons, &count, "李四", 25 );
     addPerson( &persons, &count, "王五", 28 );

     // 打印
     printf( "所有人员信息:\n" );
     printPersons( persons, count );

     // 释放内存
     for ( int i = 0; i < count; i++ )
     {
          free( persons[i] );
     }
     free( persons );

     return 0;
}

//动态数组管理：通过realloc动态调整结构体指针数组的大小，方便添加新成员。
//函数封装：addPerson函数负责添加新的Person到数组，printPersons函数负责打印所有人员信息。
//内存管理：在程序结束前，释放所有动态分配的内存，确保没有内存泄漏。
