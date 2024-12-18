#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 辅助函数：扩展回文并返回回文长度
int expand_from_center(char *str, int left, int right) {
    while (left >=0 && right < strlen(str) && tolower(str[left]) == tolower(str[right])) {
        left--;
        right++;
    }
    return right - left - 1; // 回文长度
}

// 主函数：寻找最长回文子串
void longest_palindromic_substring(char *str, char *result) {
    if (str == NULL || strlen(str) == 0) {
        result[0] = '\0';
        return;
    }

    int start = 0, end = 0;
    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        // 奇数长度的回文
        int len1 = expand_from_center(str, i, i);
        // 偶数长度的回文
        int len2 = expand_from_center(str, i, i + 1);
        // 取两者中的最大值
        int max_len = (len1 > len2) ? len1 : len2;

        if(max_len > end - start) {
            start = i - (max_len - 1)/2;
            end = i + max_len/2;
        }
    }

    // 提取最长回文子串
    int index = 0;
    for(int i = start; i <= end; i++) {
        result[index++] = str[i];
    }
    result[index] = '\0';
}

int main() {
    char str[] = "abcddddfffffqwer";
    char longest_palindrome[100]; // 假设最长回文不超过100字符

    longest_palindromic_substring(str, longest_palindrome);

    printf("输入字符串: %s\n", str);
    printf("最长的回文子串: %s\n", longest_palindrome);

    return 0;
}




中心扩展法（Expand Around Center）：以每个字符（或字符之间的位置）为中心，向两边扩展，寻找最长回文子串。
动态规划（Dynamic Programming）：利用状态转移表记录回文状态，寻找最长回文子串。

辅助函数 expand_from_center：

以 left 和 right 为中心，向两边扩展，直到不满足回文条件。
返回当前回文子串的长度。
主函数 longest_palindromic_substring：

遍历每个字符，分别考虑奇数和偶数长度的回文。
记录最长回文子串的起始和结束位置。
最后提取最长回文子串。


