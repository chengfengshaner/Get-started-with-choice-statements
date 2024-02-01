//初识 - 选择语句
#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
int main()
{
	int input = 0;//输入的值
	printf("一个条件\n");
	printf("一个对于条件的提问(1/0)");
	scanf("%d",&input);
	if (input == 1)
		printf("选择1的结果\n");
	else
		printf("不选择1的结果\n");
	return 0;
}