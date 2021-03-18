#include<stdio.h>
int main()
{
    int i,j,sum;
	printf("请输出一个整数:");
    scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
	   sum=i*j;
	   printf("%d\n",sum);
	}
	return 0;
}