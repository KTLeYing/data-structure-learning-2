#include<stdio.h>
int main()
{
    int i;
	printf("������һ�����:");
    scanf("%d",&i);
	if(i%400==0 || i%4==0 && i%100!=0)
		printf("�����������\n");
	else
		printf("����ݲ�������\n");
	return 0;
}
