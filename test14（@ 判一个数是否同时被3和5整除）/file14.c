#include<stdio.h>
int main()
{
    int a;
	printf("������һ������:");
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
	   printf("%d�ܱ�3��5ͬʱ����\n",a);
	else
	   printf("%d���ܱ�3��5ͬʱ����\n",a);
	return 0;
}