#include<stdio.h>
int main()
{
    int i,j;
    printf("��������ƽ����ʼ������ֹ��:");
	scanf("%d%d",&i,&j);
	for(;i<=j;i++)
	   printf("%d��ƽ����%d\n",i,i*i);
	return 0;

}