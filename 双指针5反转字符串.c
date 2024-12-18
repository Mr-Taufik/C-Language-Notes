#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right) {
        // 交换字符
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("原字符串: %s\n", str);
    
    reverse_string(str);
    
    printf("反转后: %s\n", str);
    return 0;
}
