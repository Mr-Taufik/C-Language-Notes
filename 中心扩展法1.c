一、中心扩展法的详细解析
1.1 中心扩展法的基本原理
中心扩展法的核心思想是：一个回文串可以看作是围绕某个中心对称扩展的。因此，我们可以通过选择每一个字符（或字符之间的位置）作为中心，然后向两侧扩展，检查扩展过程中字符是否对称相同，以此来寻找回文串。

1.2 中心扩展法的步骤
确定中心位置：

对于奇数长度的回文串，中心是某个具体的字符（例如“aba”中的“b”）。
对于偶数长度的回文串，中心是在两个字符之间（例如“abba”中的中心在两个“b”之间）。
向两侧扩展：

从中心向左右两边同时移动指针，比较对应位置的字符是否相同。
如果相同，继续向外扩展；如果不同，则停止扩展。
记录最长回文串：

在每次扩展过程中，记录当前找到的最长回文串的起始和结束位置。
最终，返回整个字符串中的最长回文串。

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 辅助函数：扩展回文并返回回文长度
int expand_from_center(char *str, int left, int right) {
    int len = strlen(str);
    while (left >= 0 && right < len && tolower(str[left]) == tolower(str[right])) {
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
            start = i - (max_len - 1) / 2;
            end = i + max_len / 2;
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
