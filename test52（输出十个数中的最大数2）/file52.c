#include<stdio.h>
int main()
{
    int i,n,max=2;
	for(i=2;i<10;i++)
	{
	   printf("�������%d����:",i);
	   scanf("%d",&n);
	   if(n>max)
		  max=n;
       printf("%d�����������Ϊ%d:\n",i,max);
	}
	printf("%d\n",max);
	return 0;
	  
}