//��ʶ - ѡ�����
#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
int main()
{
	int input = 0;//�����ֵ
	printf("һ������\n");
	printf("һ����������������(1/0)");
	scanf("%d",&input);
	if (input == 1)
		printf("ѡ��1�Ľ��\n");
	else
		printf("��ѡ��1�Ľ��\n");
	return 0;
}