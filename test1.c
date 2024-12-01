#include <stdio.h>

int main()
{
	int num = 1;
	int* p = &num;

	*p = 100;

	printf("num = %d\n", num);

	char ch = 'a';
	char* q = &ch;
	*q = 'x';
	printf("ch = %c\n", ch);


	///两种类型的步长不同

	printf("%p\n", p);
	printf("%p\n", ch);
	printf("%p\n", p + 1); //p指向的是整数，整数占4个字节，所以p+1加四个字节
	printf("%p\n", ch + 1);//q指向的是字符， 字符占1个字节，所以q+1加1个字节

	//////p+1是
	return 0;
}