////回调函数

#include <stdio.h>

typedef int(*T)(int ,int);

//typedef int(*T)(int, int);: 定义了一个类型别名T，它表示一个指向函数的指针，
//该函数接受两个int类型的参数并返回一个int。这使得在后续代码中使用函数指针更为简洁

int great(int x, int y);
int less(int x, int y);

void sort(int *array, int length, int (*p)(int, int));

//void sort(int *array, int length, T compare)
//这里还可以这样写，这里面的T compare本身就被简化了，不需要像上面那样去写；
//没有typedef就要这样写void sort(int *array, int length, int (*compare)(int, int));
//有了typedef就像下面这样写。
//typedef int (*T)(int, int);
//void sort(int *array, int length, T compare);





//声明了一个sort函数，该函数用于对数组进行排序。它接受三个参数
//int *array: 指向要排序的数组的指针。
//int (*p)(int, int): 一个函数指针，指向用于比较数组元素的函数。

int main()
{
     T q1 = great;
     T q2 = less;
     
//使用之前定义的类型别名T，声明了两个函数指针q1和q2，分别指向great和less函数。这允许在排序时灵活地选择排序的方式（升序或降序）
     
     int array[10];

     for(int i = 0; i < 10; i++)
     {
          scanf("%d", &array[i]);
     }

     sort(array, 10, q1);

     for(int j = 0; j < 10; j++)
     {
          printf("%d ", array[j]);
     }

     return 0;
}
void sort(int *array, int length, int (*p)(int, int))
{
     for(int i = 0; i < length - 1; i++)
     {
          for(int j = 0 ; j < length - 1 - i; j++)
          {
               if(p(array[j], array[j+1]))
               {
                    int temp = array[j+1];
                    array[j+1] = array[j];
                    array[j] = temp;
               }
          }
     }
}
int great(int x, int y)
{
     if(x > y)
     {
          return 1;
     }
     else
     {
          return 0;
     }
}
int less(int x, int y)
{
     if(x < y)
     {
          return 1;
     }
     else
     {
          return 0;
     }
}
