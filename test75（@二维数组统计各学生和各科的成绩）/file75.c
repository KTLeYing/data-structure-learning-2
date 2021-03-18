#include<stdio.h>
int main()
{
    int i,j;
	float score[5][4]={{77,83,84,79},{70,80,84,90},{76,91,88,84},{60,76,69,71},{76,77,80,70}};
	float x[5]={0,0,0,0,0},y[4]={0,0,0,0};
	for(i=0;i<=4;i++)
	{
	   for(j=0;j<=3;j++)
		   x[i]=x[i]+score[i][j];
	}
	for(j=0;j<=3;j++)
	{
	   for(i=0;i<=4;i++)
		   y[j]=y[j]+score[i][j];
	}
	for(i=0,j=1;i<=4,j<=5;i++,j++)
		printf("第%d个同学总成绩是:%f;第%d个同学的平均成绩是:%f\n",j,x[i],j,x[i]/4);
	for(i=0,j=1;i<=3,j<=4;i++,j++)
		printf("第%d个科目总成绩是:%f;第%d个同学的平均成绩是:%f\n",j,y[i],j,y[i]/5);
	return 0;
}