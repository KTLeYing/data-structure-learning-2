#include<stdio.h>
int main()
{
    char i;
	printf("请输入某学生成绩:");
	scanf("%c",&i);
	switch(i)
	{
	   case'A':
		   printf("该学生成绩为A等级\n");
		   break;
	   case'B':
		   printf("该同学成绩为B等级\n");
		   break;
	   case'C':
		   printf("该同学成绩为C等级\n");
		   break;
	   case'D':
		   printf("该同学成绩为D等级\n");
		   break;
	   case'E':
		   printf("该同学成绩为E等级\n");
	   default:
		   printf("出现错误\n");
	}
	return 0;
}