#include<stdio.h>
int main()
{
    int i,j,x[10],temp;
	for(i=0;i<=9;i++)
	  scanf("%d",&x[i]);
	for(i=0;i<=8;i++)
	{
	   for(j=9;j>i;j--)
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
	for(i=0;i<=9;i++)
	  printf("%d ",x[i]);
	return 0;
}