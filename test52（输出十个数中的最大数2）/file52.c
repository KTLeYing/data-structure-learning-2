#include<stdio.h>
int main()
{
    int i,n,max=2;
	for(i=2;i<10;i++)
	{
	   printf("请输入第%d个数:",i);
	   scanf("%d",&n);
	   if(n>max)
		  max=n;
       printf("%d个数中最大数为%d:\n",i,max);
	}
	printf("%d\n",max);
	return 0;
	  
}