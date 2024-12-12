////动态分配结构体指针数组
////在实际应用中，数组的大小可能不固定，可以使用动态内存分配来创建结构体指针数组。
#include <stdio.h>
#include <stdlib.h>

struct Person
{
     char name[50];
     int age;
};

int main()
{
     int n;
     printf( "请输入人数: " );
     scanf( "%d", &n );

     // 动态分配结构体指针数组
     //struct Person **ptrArray声明了一个指向指向Person结构体的指针的指针。
     // 换句话说，ptrArray是一个指针数组，每个元素都是指向Person结构体的指针
     //malloc( n * sizeof( struct Person * ) )动态分配了一块内存，这块内存可以存储n个指向Person结构体的指针。
     // sizeof(struct Person *)计算每个指针的大小，乘以n得到总的内存大小
     //将分配的内存地址赋值给ptrArray


     struct Person **ptrArray = malloc( n * sizeof( struct Person * ) );
     if ( ptrArray == NULL )
     {
          printf( "内存分配失败！\n" );
          return 1;
     }

     // 为每个指针分配内存并赋值
     for ( int i = 0; i < n; i++ )
     {
          ptrArray[i] = malloc( sizeof( struct Person ) );

          //使用for循环，从i = 0到i < n，为每个ptrArray[i]分配内存。
          //malloc( sizeof( struct Person ) )为每个Person结构体分配内存。
          //检查每次malloc是否成功，失败则打印错误信息并退出。

          if ( ptrArray[i] == NULL )
          {
               printf( "内存分配失败！\n" );
               return 1;
          }
          printf( "请输入第 %d 个姓名: ", i + 1 );
          scanf( "%s", ptrArray[i]->name );
          printf( "请输入第 %d 个年龄: ", i + 1 );
          scanf( "%d", &ptrArray[i]->age );
     }

     // 打印信息
     printf( "\n输入的信息如下:\n" );
     for ( int i = 0; i < n; i++ )
     {
          printf( "姓名: %s, 年龄: %d\n", ptrArray[i]->name, ptrArray[i]->age );
     }

     // 释放内存
     for ( int i = 0; i < n; i++ )
     {
          free( ptrArray[i] );
     }
     free( ptrArray );

     //使用for循环遍历所有ptrArray[i]，调用free释放每个分配的Person结构体内存
     
     return 0;
}

/*动态分配：使用malloc根据用户输入的n动态分配结构体指针数组的内存。
为每个指针分配内存：为每个指针分配单独的Person结构体内存。
输入和输出：用户输入每个人的姓名和年龄，程序存储并打印这些信息。
内存释放：使用free释放分配的内存，防止内存泄漏*/

// 重点解释 **ptrArray:
// ptrArray是一个指向指针的指针，具体来说，它是一个指向指向Person结构体的指针的指针。
// ptrArray[i]表示第i个指向Person结构体的指针。
// ptrArray[i]->name和ptrArray[i]->age分别访问第i个Person结构体的name和age成员。
// 使用双重指针（**ptrArray）的好处是可以动态地管理多个结构体实例的内存，每个结构体的内存可以独立分配和释放

