这里用的是科学计数法计算，e的后面的数字，代表运行的时候数字乘于多少个10
例如1e1就是10
0.9e1就是9


#include <stdio.h>

int main()
{
	long int a = 1e9;
	double b = 9.9999e10;
	
	
	printf("%ld\n", a);
	printf("%lf\n", b);

	return 0;
}



