#include<stdio.h>
int main()
{
    int i,j ,s[4][5];
	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
			s[i][j]=i*5+j;
	printf("请按二维数组输出数据:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			printf("%3d",s[i][j]);
	    printf("\n");
	}
	printf("请按一维数组输出数据:\n");
	for(i=0;i<20;i++)
	    printf("%3d",s[0][i]);
	return 0;
}
