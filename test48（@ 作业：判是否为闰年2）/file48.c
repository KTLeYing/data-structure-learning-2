#include<stdio.h>
int main()
{
    int i;
	printf("请输入一个年份:");
    scanf("%d",&i);
	if(i%400==0 || i%4==0 && i%100!=0)
		printf("改年份是闰年\n");
	else
		printf("改年份不是闰年\n");
	return 0;
}
