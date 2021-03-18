#include <stdio.h>
#include<math.h>
int main()
{
   int a,b,c,t;
   printf("请输入三个数:");
   scanf("%d%d%d",&a,&b,&c);
   if(a<b)
   {
	   if(a>c)
		   printf("the final sorted from samll to big is:%d %d %d\n",c,a,b);
	   else
		   if(b<c)
			   printf("the final sorted from small to big is:%d %d %d\n",a,b,c);
		   else
			   printf("the final sorted from small to big is:%d %d %d\n",a,c,b);
   }
   else
	   if(a<c)
		   printf("the final sorted from small to big is:%d %d %d\n",b,a,c);
	   else
		   if(b<c)
			   printf("the final sorted from small to big is:%d %d %d\n",b,c,a);
		   else
			   printf("the final sorted from small to big is:%d %d %d\n",c,b,a);
  return 0; 
}