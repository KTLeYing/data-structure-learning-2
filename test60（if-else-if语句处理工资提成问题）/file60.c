#include<stdio.h>
int main()
{
    long int i;
	float a,b;
	printf("请输入工资:");
	scanf("%ld",&i);
	if(i<=30000)
	{
		a=i*(1+0.08);
	    b=i*0.08;
	}
	else
		if(i>30000 && i<=70000)
		{
			a=i*(1+0.05);
		    b=1*0.05;
		}
		else
			if(i>70000 && i<100000)
			{
				a=i*(1+0.03);
			    b=i*0.03;
			}
			else
				if(i>100000)
				{
					a=i*(1+0.01);
				    b=i*0.01;
				}
	printf("最终工资为:%f 最终提成为:%f\n",a,b);
	return 0;
}
