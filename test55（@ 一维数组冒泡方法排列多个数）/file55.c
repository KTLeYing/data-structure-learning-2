#include<stdio.h>
int main()
{
	int x[10],i,j,temp;
	printf("����������:");
	for(i=0;i<10;i++)
	  scanf("%d",&x[i]);
	for(i=0;i<9;i++)
	{
		for(j=9;j>i;j--)
		{
		   if(x[i]>x[j])
		   {
			   temp=x[i];
			   x[i]=x[j];
			   x[j]=temp;
		   }
		}
	}
	printf("���յ�����˳��Ϊ:");
	for(i=0;i<10;i++)
		printf("% d",x[i]);
	return 0;
}
