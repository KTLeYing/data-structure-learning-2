#include<stdio.h>
int main()
{
   char i;
   int j;
   printf("ASC¢òÂë±í:\n");
   for(j=1,i=32;i<=126;i++,j++)
   {
	   printf("%3d %2c",i,i);
	   if(j>9)
	   {
		  printf("\n");
		  j=0;
	   }
   }
   return 0;
}
