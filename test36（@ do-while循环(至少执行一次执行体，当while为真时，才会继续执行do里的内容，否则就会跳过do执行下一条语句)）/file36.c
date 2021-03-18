#include<stdio.h>
int main()
{
    int i;
	do
	{
	   printf("1:GQY要努力!\n");
	   printf("2:MZL也要努力!\n");
	   printf("3:GQY和MZL一起努力，四年之后我们会在一起的!\n");
	   printf("4:We are together!\n");
	   printf("0:退出系统\n\n\n");
	   scanf("%d",&i);
	   switch(i)
	   {
	     case 1:
		    printf("▽\n");
		    printf("GQY要努力!\n\n\n");
		    break;
	     case 2:
		    printf("▽\n");
		    printf("MZL也要努力!\n\n\n");
		    break;
	     case 3:
		    printf("▽\n");
		    printf("GQY和MZL一起努力,四年之后我们会在一起!\n\n\n");
		    break;
	     case 4:
		    printf("▽\n");
		    printf("We are together!\n\n\n");
		    break;
		 default:
			printf("We are together\n\n\n");
			break;
	   }
	}
	while(i);
    return 0;
}
