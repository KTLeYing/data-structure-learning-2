#include<stdio.h>
int main()
{
    int i,j;
	for(i=1;i<=5;i++)
	{
	   for(j=1;j<=5;j++)
	   {
	      if(j<=i-1)
			 printf(" ");
		  else
			  printf("*");
	   }
       printf("\n");
	}
	for(i=5;i<=9;i++)
    {
	  for(j=1;j<=10;j++)
	  {
	     if(j<=5)
			 printf(" ");
		 else
			 if(j>5 && j<=i+1)
			    printf("*");
			 else
				 printf(" ");
	  }
	  printf("\n");
	}
	return 0;
}
