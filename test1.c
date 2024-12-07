#include <stdio.h>
#include <math.h>

typedef void(*Function)(int, int);
typedef void(*Case)();

void f1();
void f2();

void Add(int x, int y);
void Subtra(int x, int y);
void Mul(int x, int y);
void Div(int x, int y);
void Sqrt(int x, int y);
void Pow(int x, int y);
void Factorial(int x, int y);



int main()
{
	int choice;
	int x = 0;
	int y = 0;
	printf("ѡ�����ѡ��\n");

	printf("1.�Ӽ���\t2.�˳���\t3.������\n4.�ݴη�\t5.�׳�\n");

	scanf_s("%d", &choice);

	Function q1 = Add;           //�ӷ�
	Function q2 = Subtra;        //����
	Function q3 = Mul;           //�˷�
	Function q4 = Div;           //����
	Function q5 = Sqrt;          //��ƽ����
	Function q6 = Pow;           //�ݴη�
	Function q7 = Factorial;     //�׳�

	Case choice1 = f1;
    Case choice2 = f2;

	
	switch (choice)
	{
	case 1:

		f1();

		break;
	case 2:

		f2();

		break;
	case 3:
		
		printf("���뿪����x ");
		scanf_s("%d", &x);
		printf("����ڶ�������y (��Ч����)");
		scanf_s("%d", &y);

		Sqrt(x, y);

		break;
	case 4:
		printf("�������x ");
		scanf_s("%d", &x);
		printf("�����ݴη�y ");
		scanf_s("%d", &y);

		Pow(x, y);

		
		break;
	case 5:
		printf("������Ҫ�׳˵�����x ");
		scanf_s("%d", &x);
		printf("������Ҫ�׳˵���y ");
		scanf_s("%d", &y);

		Factorial(x, y);

		
		break;
	default:
		printf("������Ч��\n");
		break;
	}

	//printf("1.�Ӽ���\t2.�˳���\t3.������\n\t4.�ݴη�\t5.�׳�\n");


	return 0;
}

void f1()
{
	int choice;
	int x, y;
	printf("�ӷ�����1 ��������2\n");
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		printf("������������x y\n");
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		Add(x, y);
	}
	else if (choice == 2)
	{
		printf("������������x y\n");
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		Subtra(x, y);
	}
}
void f2()
{
	int choice;
	int x, y;
	printf("�˷�����1 ��������2\n");
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		printf("������������x y\n");
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		Add(x, y);
	}
	else if (choice == 2)
	{
		printf("������������x y\n");
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		Subtra(x, y);
	}
}

void Add(int x, int y)
{
	printf("\n%d��%d�ĺ���%d", x, y, x + y);
}
void Subtra(int x, int y)
{
	printf("\n%d��ȥ%d����%d", x, y, x - y);
}
void Mul(int x, int y)
{
	printf("\n%d����%d����%d", x, y, x*y);
}
void Div(int x, int y)
{
	printf("\n%d����%d����%d", x, y, x/y);
}

void Sqrt(int x, int y)
{
	
	double result = sqrt((double)x);
	printf("����������ֵ�ƽ������%.4lf", result);
}

void Pow(int x, int y)
{
	int result = (int)pow((double)x, (double)y);
	printf("������ĵ���%d��%d�η��Ĵ���%d", x, y, result);
}

void Factorial(int x, int y)
{
	
	int sum = 1;

	for (int i = 0; i < y; i++)
	{
		sum *= x;
		x--;
	}
	printf("����������ֵ�%d��׳˽����%u", y, sum);

}

