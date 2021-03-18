#include<stdio.h>
#define PI 3.14
int main()
{
    float v,s,r,h;
	printf("«Î ‰»Î∞Îæ∂:");
	scanf("%f",&r);
	printf("«Î ‰»Î∏ﬂ:");
	scanf("%f",&h);
	s=(2*PI*r)*h+PI*r*r;
	  printf("%f\n",s);
	v=(PI*r*r)*h;
	  printf("%f\n",v);
	return 0;
}
