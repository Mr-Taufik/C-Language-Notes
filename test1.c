///野指针
/*
#include <stdio.h>

int main()
{
	int* p;
	*p = 100;  /// 段错误，访问了不能访问的内存，这个p就是野指针
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	int* p = NULL;//空指针里面没东西的，也不能使用
	return 0;
}
*/

///////////////////
//如何合法的使用内存
//1 系统分配内存
#include <stdio.h>
#include <stdlib.h>   ///申请内存的时候需要包含的头文件
int main()
{
	// 1 系统分配内存；
	int a;
	int* p1 = &a;
	//2 用户申请内存 （指的是堆内存）//动态内存申请，运行的时候才会分配内存给你
	char* str = (char*)malloc(32);
	//str自己本身有八个字节，这八个字节储存的是申请内存的首地址，str作为指针指向申请的32这块内存
	free(str);  ///释放内存 如果不释放，会造成内存泄露
	//手动申请的内存一定要手动释放掉
	str = NULL; //释放内存以后让他等于空，不然会变成野指针
	return 0;
}