#include<stdio.h>
int main()
{
    int i;
	printf("请输入一个数:");
	scanf("%d",&i);
	printf("%d显示为八进制:%o\n",i,i);
	printf("%d显示为十进制:%x\n",i,i);
	printf("%d显示为字符:%c\n",i,i);
	return 0;
}