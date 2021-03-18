#include<stdio.h>
int main()
{
    int i,j,x[6],temp;
	for(i=0;i<=5;i++)
		scanf("%d",&x[i]);
	for(i=0;i<=4;i++)
	{
	   for(j=1+i;j<=5;j++)
	   {
		   if(x[i]>x[j])
		   {
		    temp=x[i];
			x[i]=x[j];
			x[j]=temp;
		  }
	   }
	}
	printf("the sorted number is:\n");
	for(i=0;i<=5;i++)
	  printf("%d ",x[i]);
	return 0;
}
