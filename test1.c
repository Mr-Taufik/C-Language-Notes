////指针基础

#include <stdio.h>

int main()
{
	int a = 1;
	int* p = &a;///*表示后面的p是一个指针变量，然后赋值是取地址a（整形指针类型 ）

	///p里面占有八个字节，这八个字节是存放的是a的地址，p是一个指针它指向a

	///常见的指针类型的指针长度
	printf("%lu\n", sizeof(int *));
	printf("%lu\n", sizeof(char *));
	printf("%lu\n", sizeof(double *)) ;
	printf("%lu\n", sizeof(float *));
	printf("%lu\n", sizeof(short *));

	char ch = 'a';////这里面的ch只占一个字节存储的是a
	char* q = &ch;///这里面是q存放的是ch的地址，因为*q是指针，所以占有8个字节

	/*64位的环境里面指针都是8个字节
	* 一个 字节等于8位
	* 所以64除于8位等于八个字节，这八个字节是用来存储地址的
	* 
	*/
	return 0;
}
/*

星号*有两种含义
int *p = &a；
    *p = 100；
	
	* 的两种含义
1 . 定义的时候（前面有类型）表示后面的变量是指针
2 . 使用的时候表示取值（取指针指向的内存空间的值）
    *p 就是a
	*  *p = 100；这里就是把a的值给改成100



*/