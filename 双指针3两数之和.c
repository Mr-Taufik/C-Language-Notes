#include <stdio.h>

void two_sum_sorted(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int current_sum = arr[left] + arr[right];
        if (current_sum == target) {
            printf("找到两个数：%d 和 %d\n", arr[left], arr[right]);
            return;
        } else if (current_sum < target) {
            left++;
        } else {
            right--;
        }
    }
    printf("没有找到符合条件的两个数。\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 6;

    two_sum_sorted(arr, size, target);
    return 0;
}
