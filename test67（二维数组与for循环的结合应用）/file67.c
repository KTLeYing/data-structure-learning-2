#include<stdio.h>
int main()
{
    int i,j,x[5][6];
	for(i=0;i<=4;i++)
		for(j=0;j<=5;j++)
			x[i][j]=i*i+j*j;
	printf("�������ά����:\n");
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=5;j++)
		    printf("%4d",x[i][j]);
            printf("\n");
	}
	printf("�����һά����:\n");
	for(i=0;i<=29;i++)
		printf("%4d",x[i][j]);
	return 0;
}