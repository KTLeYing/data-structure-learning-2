#include<stdio.h>
int main()
{
    int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{   
			if(j<=2*i-1)
				printf(" ");
            else
				 if(i%2!=0)
				 {
				    if((j+i-1)%2==0)
				         printf("*");
			     else
					 printf(" ");
				 }
				 else
					 if((j+i-1)%2==0)
						 printf(" ");
					 else
						 printf("*");
		}
		printf("\n");
	}
	return 0;
}