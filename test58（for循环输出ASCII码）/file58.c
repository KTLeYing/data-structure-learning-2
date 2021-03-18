#include<stdio.h>
int main()
{
    char c;
	int i;
	printf("ASCIIÂë±í\n");
	for(c=32,i=0;c<=126;c++,i++)
	{
		printf("%4d  %2c",c,c);
	    if(i==9)
		{
		   printf("\n");
		   i=0;
		}
	}
	return 0;
}
