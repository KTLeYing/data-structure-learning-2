#include<stdio.h>
#include<math.h>
int main()
{
	float r1=0.0414,r2=0.0468,r3=0.054,r4=0.0585,r5=0.0072,p1,p2,p3,p=1000.0,p4=1000.0,p5=1000.0;
	int i;
	p1=p*(1+r4*5);
	  printf("%f\n",p1);
	p2=p*(1+r2*2)*(1+r3*3);
	  printf("%f\n",p2);
	p3=p*(1+r3*3)*(1+r2*2);
	  printf("%f\n",p3);
	for(i=1;i<6;i++)
      p4=p4*(1+r1*1);
	printf("%f\n",p4);
	for(i=1;i<21;i++)
	  p5=p5*(1+r5/4);
    printf("%f\n",p5);
    return 0;
}