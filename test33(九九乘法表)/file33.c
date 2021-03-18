#include<stdio.h>
int main()
{
    int i,j,sum;
	printf("¹ùÙ»Ó¯·¨Ôò±í:\n");
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
	  {
		  sum=i*j;
		  printf("%d*%d=%d",i,j,sum);
		  printf(" ");
	  }
	  printf("\n");
	}
	return 0;
}