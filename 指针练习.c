#include <stdio.h>

int main()
{
     // 初始化数组
     int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
     int unarray[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

     // 使用指针访问数组
     int *read = unarray; // 直接指向 unarray 数组的第一个元素
     int *write = array;  // 直接指向 array 数组的第一个元素

     // 将 unarray 的内容复制到 array
     for ( int i = 0; i < 10; i++ )
     {
          write[i] = read[i];
     }

     // 打印 array 数组的内容
     for ( int i = 0; i < 10; i++ )
     {
          printf( "%d ", array[i] );
     }

     return 0;
}
指针初始化： int *read = unarray; 和 int *write = array;，直接指向数组的第一个元素，而不是使用 &unarray 这种方式。

你的代码中有一个小错误：int *read = &unarray; 这行代码中的 &unarray 获取的是 unarray 数组的地址（即二维数组的地址），
而不是它的第一个元素的地址。正确的写法应该是 int *read = unarray;，这样 read 将指向数组 unarray 的第一个元素


