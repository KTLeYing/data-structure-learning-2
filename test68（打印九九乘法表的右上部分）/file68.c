#include<stdio.h>
int main()
{
    int i,j,sum;
	for(i=1;i<=9;i++)
	{
	   for(j=1;j<=9;j++)
	   {
	      if(i>j)
			  printf("       ");
		  else
		  {
			  sum=i*j;
		      printf("%d*%d=%2d ",i,j,sum);
		  }
	   }
	   printf("\n");
	}
    return 0;
}
