#include <stdio.h>



//////////这两个函数分别用于判断两个整数x和y的大小关系。
int less(int x, int y)
{
	return (x > y) ? 1 : 0;
}

int greater(int x, int y)
{
	return (x < y) ? 1 : 0;
}

void sort(int* a, int len, int(*p)(int , int))
///////在sort函数的参数列表中，有一个参数int(*p)(int, int)：
//这表示p是一个指向函数的指针，这个函数接受两个int类型的参数并返回一个int类型的值。通过这种方式，
// sort函数可以接受任何符合该签名的函数作为回调
//这里，p(a[j], a[j + 1])调用了传入的回调函数p，并将当前相邻的两个元素a[j]和a[j + 1]作为参数传递给它。
// 根据p返回的值（1或0），决定是否交换这两个元素
{
	for (int i = 0; i < 10-1; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (p(a[j], a[j + 1]))
				////并通过回调函数p来决定元素的交换条件
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main()
{

	int array[10];

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &array[i]);
	}


	sort(array, 10, greater);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}



//////这意味着sort函数在排序过程中，
// 将使用greater函数来决定是否交换相邻的元素。由于greater函数在x < y时返回1，sort函数会将较小的元素交换到后面，从而实现降序排序。
//如果你想要按升序排序，只需将less函数作为回调传入
//使用回调函数使得sort函数更加通用和灵活。通过传入不同的比较函数，可以轻松地改变排序的行为，
// 而无需修改sort函数的内部逻辑。这种设计符合开闭原则（对扩展开放，对修改封闭），提高了代码的可维护性和可复用性。