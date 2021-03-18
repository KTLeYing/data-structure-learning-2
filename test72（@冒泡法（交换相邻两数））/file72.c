#include<stdio.h>
int main()
{
    int i,j,x[10],temp;
	printf("ÇëÊäÈëÊı¾İ:");
	for(i=0;i<=9;i++)
		scanf("%d",&x[i]);
	for(j=0;j<9;j++)
	{
	   for(i=0;i<9-j;i++)
	   {
	      if(x[i]>x[i+1])
		  {
		     temp=x[i];
			 x[i]=x[i+1];
			 x[i+1]=temp;
		  }
	   }
	}
	printf("the sorted nummber is:\n");
	for(i=0;i<=9;i++)
		printf("%d ",x[i]);
	return 0;
}
