#include<stdio.h>
int main()
{
    int i,a=0,b=0,x[10];
	for(i=0;i<=9;i++)
		scanf("%d",&x[i]);
	for(i=0;i<=9;i++)
	{
	   if(x[i]>0)
		   a++;
	   else
	       b++;
	}
	printf("��������Ϊ:%d\n",a);
	printf("��������Ϊ:%d\n",b);
	return 0;
}