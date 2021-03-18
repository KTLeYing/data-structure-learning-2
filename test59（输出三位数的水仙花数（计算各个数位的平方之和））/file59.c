#include<stdio.h>
int main()
{
    int i,x,y,z,sum;
	printf("100到999的水仙花数:");
	for(i=100;i<=999;i++)
	{
	   x=i/100;   //百位上的数
	   y=(i-x*100)/10;    //十位上的数
	   z=i-(x*100+y*10);    //个位上的数
	   sum=x*x+y*y+z*z;
	   printf("%d*%d+%d*%d+%d*%d=%d\n",x,x,y,y,z,z,sum);
	}
    return 0;
}