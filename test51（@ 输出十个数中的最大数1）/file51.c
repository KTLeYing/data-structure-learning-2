#include<stdio.h>
int main()
{
    int i=2,n,max=1;
	while(i<10)
	{
	   printf("请输入第%d个数:",i);
       scanf("%d",&n);
	   if(n>max)
		 max=n;
	   i++;
	}
    printf("the max number is:%d\n",max);
	return 0;
}
