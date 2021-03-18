#include<stdio.h>
int main()
{
    int i,j;
	char c='a';
	printf("请输入两个整数:");
	scanf("%d%d",&i,&j);
	printf("%d,显示为%c\n",i,i);
	printf("%d,显示为%c\n",j,j);
	printf("%c,显示为%d\n",c,c);
	c=c+1;
	printf("%c,显示为%d\n",c,c);
	return 0;
}

