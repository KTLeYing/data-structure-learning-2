#include<stdio.h>
int main()
{
    int x=3,y=8,t=4,a,b,c,d;
	a=x++;
	b=(x++)+(++y)*(t++);
	c=(++x)+y/t;
	d=(y++)||(x--)&&(--t);
	printf("%3d%3d%3d%3d\n",a,b,c,d);
	return 0;
}