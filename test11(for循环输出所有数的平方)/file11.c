#include<stdio.h>
int main()
{
    int i,j;
    printf("请输入求平方起始数和终止数:");
	scanf("%d%d",&i,&j);
	for(;i<=j;i++)
	   printf("%d的平方是%d\n",i,i*i);
	return 0;

}