#include<stdio.h>
int main()
{
    int i;
	printf("请输出一个整数:");
	scanf("%d",&i);
	if(i%3==0 && i%5==0)
	   printf("请输出yes\n");
	else
	   printf("请输出no\n");
}