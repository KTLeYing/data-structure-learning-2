#include<stdio.h>
#define PI 3.14
int main()
{
    float v,s,r,h;
	printf("������뾶:");
	scanf("%f",&r);
	printf("�������:");
	scanf("%f",&h);
	s=(2*PI*r)*h+PI*r*r;
	  printf("%f\n",s);
	v=(PI*r*r)*h;
	  printf("%f\n",v);
	return 0;
}
