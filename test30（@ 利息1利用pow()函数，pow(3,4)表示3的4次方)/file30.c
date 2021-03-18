#include<stdio.h>
#include<math.h>
int main()
{
    float r1=0.0414,r2=0.0468,r3=0.054,r4=0.0585,r5=0.0072,p1,p2,p3,p4,p5;
	int p=1000;
	p1=p*(1+r4*5);
	  printf("%f\n",p1);
	p2=p*(1+r2*2)*(1+r3*3);
	  printf("%f\n",p2);
	p3=p*(1+r3*3)*(1+r2*2);
	  printf("%f\n",p3);
	p4=p*pow(1+r1,5);
	  printf("%f\n",p4);
	p5=p*pow(1+r5/4,4*5);
	  printf("%f\n",p5);
	return 0;
}   