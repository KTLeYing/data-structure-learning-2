#include<stdio.h>
int main()
{
    int x=0,y=1,z;
	float a=5.7;
	char b='z';
	z=(x++)||(y--);
       printf("%d\n",z);
	z=a-y;
	   printf("%d\n",z);
	z=b-4;
	   printf("%c\n",z);
	return 0;
}

