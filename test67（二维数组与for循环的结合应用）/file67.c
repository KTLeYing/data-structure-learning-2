#include<stdio.h>
int main()
{
    int i,j,x[5][6];
	for(i=0;i<=4;i++)
		for(j=0;j<=5;j++)
			x[i][j]=i*i+j*j;
	printf("请输出二维数组:\n");
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=5;j++)
		    printf("%4d",x[i][j]);
            printf("\n");
	}
	printf("请输出一维数据:\n");
	for(i=0;i<=29;i++)
		printf("%4d",x[i][j]);
	return 0;
}