#include<stdio.h>
int main()
{
    char i;
	printf("������ĳѧ���ɼ�:");
	scanf("%c",&i);
	switch(i)
	{
	   case'A':
		   printf("��ѧ���ɼ�ΪA�ȼ�\n");
		   break;
	   case'B':
		   printf("��ͬѧ�ɼ�ΪB�ȼ�\n");
		   break;
	   case'C':
		   printf("��ͬѧ�ɼ�ΪC�ȼ�\n");
		   break;
	   case'D':
		   printf("��ͬѧ�ɼ�ΪD�ȼ�\n");
		   break;
	   case'E':
		   printf("��ͬѧ�ɼ�ΪE�ȼ�\n");
	   default:
		   printf("���ִ���\n");
	}
	return 0;
}