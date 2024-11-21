



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
	printf("**************ѧ������ϵͳ**************\n");
	printf("**********0���˳�                *******\n");
	printf("**********1��¼��ѧ���ɼ�        *******\n");
	printf("**********2���鿴���йҿ�ѧ����Ϣ*******\n");
	printf("**********3���鿴����ѧ����Ϣ    *******\n");
	printf("**********4���޸�ѧ����Ϣ        *******\n");
	printf("**********5������                *******\n");
	printf("****************************************\n");


	do
	{
		printf("\nѡ�����ѡ�� �� ");
		if (scanf_s("%d", &choice) != 1)
		{
			printf("������Ч��������һ��������\n");

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
			printf("**************ѧ������ϵͳ**************\n");
			printf("**********0���˳�                *******\n");
			printf("**********1��¼��ѧ���ɼ�        *******\n");
			printf("**********2���鿴���йҿ�ѧ����Ϣ*******\n");
			printf("**********3���鿴����ѧ����Ϣ    *******\n");
			printf("**********4���޸�ѧ����Ϣ        *******\n");
			printf("**********5������                *******\n");
			printf("****************************************\n");
			break;

		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("��Ч��ѡ�����������롣\n");
			break;
		}

	} while (choice != 0);
	
	return 0;
}

int  EnterStudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS])
{
	int count;
	printf("�����ѧ�������� ");
	scanf_s("%d", &count);
	while (getchar() != '\n');
	printf("ѧ������Ϊ%d\n����ѧ������\n", count);
	for (int i = 0; i < count; i++)
	{
		fgets(studentNames[i], sizeof(studentNames[i]), stdin);
	}
	printf("����ѧ���ɼ���\n");
	for (int j = 0; j < count; j++)
	{
		printf(" %s�ĳɼ��ǣ�", studentNames[j]);
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
		printf("%s�ĳɼ���%d\n", studentNames[i], studentsarr[i]);
	}
}
void StudentsInformation(char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], int studentsarr[MAX_STUDENTS])
{
	int a;
	printf("���޸ĵڼ���ѧ������Ϣ��\n");
	scanf_s("%d", &a);
	while (getchar() != '\n');
	printf("�� %d ��ѧ������Ϣ ����: %s, �ɼ�: %d\n", a, studentNames[a - 1], studentsarr[a - 1]);
	printf("���������֣�\n");
	fgets(studentNames[a - 1], MAX_NAME_LENGTH, stdin);
	printf("�����·�����\n");
	scanf_s("%d", &studentsarr[a - 1]);
	while (getchar() != '\n'); 
	printf("�µ�%d��ѧ������Ϣ�� %s , %d\n", a, studentNames[a - 1], studentsarr[a - 1]);
}







