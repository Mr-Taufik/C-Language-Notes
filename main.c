////回调函数

#include <stdio.h>

typedef int(*T)(int ,int);
int great(int x, int y);
int less(int x, int y);

void sort(int *array, int length, int (*p)(int, int));
int main()
{
     T q1 = great;
     T q2 = less;

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