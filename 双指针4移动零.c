#include <stdio.h>

void move_zeroes(int arr[], int size)
{
     int lastNonZeroFoundAt = 0;

     // 将非零元素移动到前面
     for (int current = 0; current < size; current++)
     {
          if (arr[current] != 0)
          {
               arr[lastNonZeroFoundAt++] = arr[current];
          }
     }

     // 填充零
     while (lastNonZeroFoundAt < size)
     {
          arr[lastNonZeroFoundAt++] = 0;
     }
}

int main() {
     int arr[] = {0, 1, 0, 3, 12};
     int size = sizeof(arr)/sizeof(arr[0]);

     move_zeroes(arr, size);

     printf("移动后的数组：");
     for(int i = 0; i < size; i++)
     {
          printf("%d ", arr[i]);
     }
     printf("\n");

     return 0;
}
