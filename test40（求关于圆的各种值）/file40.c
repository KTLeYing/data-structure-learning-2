#include<stdio.h>
#define PI 3.14
int main()
{
	float r,h,c,s1,s2,v1,v2;
	printf("请输入两个数:");
	scanf("%f%f",&r,&h);
	c=2*PI*r;
	s1=PI*r*r;
	s2=4*PI*r*r;
	v1=4/3*PI*r*r*r;
	v2=PI*r*r*h;
	printf("圆周长=%.2f,圆面积=%.2f,圆球表面积=%.2f,圆球体积=%.2f,圆柱体积=%.2f\n",c,s1,s2,v1,v2);
	return 0;
}
