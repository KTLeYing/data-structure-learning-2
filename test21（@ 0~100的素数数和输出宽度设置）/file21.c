#include<stdio.h>
int main()
{
    int i,j,k=0;
	for(i=1;i<=100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			  break;
        }
	    if(j>=i)
		{
			printf("%4d",i);
			k++;
		}
		if(k%10==0)
			printf("\n");
	}
	return 0;
		
}
