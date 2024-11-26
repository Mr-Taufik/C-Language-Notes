



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

int EnterStudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS]);
void FailedStudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS], int count);
void FindStudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS], int count);
void StudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS]);
int main()
{
	int choice;
	int studentsarr[MAX_STUDENTS] = {0};
	char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH];
	int count = 0;
	printf("****************************************\n");
	printf("**************学生管理系统**************\n");
	printf("**********0、退出                *******\n");
	printf("**********1、录入学生成绩        *******\n");
	printf("**********2、查看所有挂科学生信息*******\n");
	printf("**********3、查看所有学生信息    *******\n");
	printf("**********4、修改学生信息        *******\n");
	printf("**********5、清屏                *******\n");
	printf("****************************************\n");


	do
	{
		printf("\n选择你的选项 ： ");
		if (scanf_s("%d", &choice) != 1)
		{
			printf("输入无效，请输入一个整数。\n");

			while (getchar() != '\n');
			continue;
		}
		while (getchar() != '\n');
		switch (choice)
		{
		case 1:
			count = EnterStudentsInformation(studentNames, studentsarr);
			break;
		case 2:
			FailedStudentsInformation(studentNames, studentsarr, count);
			break;
		case 3:
			FindStudentsInformation(studentNames, studentsarr, count);
			break;
		case 4:
			StudentsInformation(studentNames, studentsarr);
			break;
		case 5:
			system("cls");
			printf("****************************************\n");
			printf("**************学生管理系统**************\n");
			printf("**********0、退出                *******\n");
			printf("**********1、录入学生成绩        *******\n");
			printf("**********2、查看所有挂科学生信息*******\n");
			printf("**********3、查看所有学生信息    *******\n");
			printf("**********4、修改学生信息        *******\n");
			printf("**********5、清屏                *******\n");
			printf("****************************************\n");
			break;

		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("无效的选择，请重新输入。\n");
			break;
		}

	} while (choice != 0);
	
	return 0;
}

int  EnterStudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS])
{
	int count;
	printf("输入的学生数量： ");
	scanf_s("%d", &count);
	while (getchar() != '\n');
	printf("学生数量为%d\n输入学生姓名\n", count);
	for (int i = 0; i < count; i++)
	{
		fgets(studentNames[i], sizeof(studentNames[i]), stdin);
	}
	printf("输入学生成绩：\n");
	for (int j = 0; j < count; j++)
	{
		printf(" %s的成绩是：", studentNames[j]);
		scanf_s(" %d", &studentsarr[j]);
	}
	return count;
}
void FailedStudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS], int count)
{
	int Failescore = 60;
	
	for (int i = 0; i < count; i++)
	{
		if (studentsarr[i] < 60)
		{
			printf("%s , %d\n", studentNames[i], studentsarr[i]);
		}
		  
	}
}
void  FindStudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%s的成绩是%d\n", studentNames[i], studentsarr[i]);
	}
}
void StudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS])
{
	int a;
	printf("想修改第几个学生的信息？\n");
	scanf_s("%d", &a);
	while (getchar() != '\n');
	printf("第 %d 个学生的信息 姓名: %s, 成绩: %d\n", a, studentNames[a - 1], studentsarr[a - 1]);
	printf("输入新名字：\n");
	fgets(studentNames[a - 1], MAX_NAME_LENGTH, stdin);
	printf("输入新分数：\n");
	scanf_s("%d", &studentsarr[a - 1]);
	while (getchar() != '\n'); 
	printf("新第%d个学生的信息是 %s , %d\n", a, studentNames[a - 1], studentsarr[a - 1]);
}







