#include<stdio.h>
int main()
{
    int i,x,y,z,sum;
	printf("100��999��ˮ�ɻ���:");
	for(i=100;i<=999;i++)
	{
	   x=i/100;   //��λ�ϵ���
	   y=(i-x*100)/10;    //ʮλ�ϵ���
	   z=i-(x*100+y*10);    //��λ�ϵ���
	   sum=x*x+y*y+z*z;
	   printf("%d*%d+%d*%d+%d*%d=%d\n",x,x,y,y,z,z,sum);
	}
    return 0;
}