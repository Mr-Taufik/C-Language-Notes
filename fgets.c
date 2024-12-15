////fgets用法
///fgets是可以输入空格的

////从标准输入读取一行

#include <stdio.h>

int main() {
     char buffer[100];

     printf("请输入一行文本：");
     if (fgets(buffer, sizeof(buffer), stdin) != NULL)
     {
          printf("您输入的是：%s", buffer);
     } else
     {
          printf("读取输入时发生错误。\n");
     }

     return 0;
}
////fgets 从 stdin（标准输入）中读取最多 sizeof(buffer) - 1 个字符，并在末尾添加 \0 终止符。
////如果用户输入的内容超过缓冲区大小，fgets 会读取前面的部分，剩余的部分会留在输入缓冲区中
////注意事项
////缓冲区大小：确保缓冲区足够大以存储预期的输入。如果输入超过缓冲区大小，fgets 只会读取前 n-1 个字符，剩余的字符留在输入流中。
////换行符：fgets 会保留输入中的换行符（'\n'），除非输入长度超过了缓冲区大小。你可能需要手动去除换行符。
