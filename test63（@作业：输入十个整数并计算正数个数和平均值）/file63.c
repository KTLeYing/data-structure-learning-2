#include<stdio.h>
int main()
{
    int i,a=0,b=0,sum=0,x[10],average;
	printf("������ʮ������:");
	for(i=0;i<=9;i++)
		scanf("%d",&x[i]);
	for(i=0;i<=9;i++)
	{
	if(x[i]>0)
		a++;
	}
	for(i=0;i<=9;i++)
		sum+=x[i];
	average=sum/10;
	printf("��������Ϊ:%d\n",a);
	printf("ƽ����Ϊ:%d\n",average);
	return 0;
}
