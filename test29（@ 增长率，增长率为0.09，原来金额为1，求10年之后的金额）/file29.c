#include<stdio.h>
int main()
{
    float r=0.09,p=1.0,n;
	for(n=1;n<=10;n++)
		p=p*(1+r);
	printf("%f\n",p);
	return 0;
}