#include<stdio.h>
int main()
{
    int n1,n2,x,y,z;
	printf("�����������ͻ���:");
	scanf("%d%d",&n1,&n2);
	for(x=1;x<n2/3;x++)
	{
	   for(y=1;y<(n2-3*x)/2;y++)
	   {
		   z=n1-x-y;
		   if(z>=1)
	          printf("������%dƥ,������%dƥ,С����%dƥ\n",x,y,z);
	   }
	}
	return 0;
}
