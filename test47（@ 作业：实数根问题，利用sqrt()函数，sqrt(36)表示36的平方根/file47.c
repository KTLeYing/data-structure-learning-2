#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i;
	double j1,j2;
	printf("请输入三个数:");
	scanf("%d%d%d",&a,&b,&c);
	i=b*b-4*a*c;
	j1=-b+sqrt(i)/2*a;
	j2=-b-sqrt(i)/2*a;
	if(i!=0)
	  if(i>0)
	    printf("有两个不等实根且为%lf %lf\n",j1,j2);
	  else
		printf("没有实数根\n");
	else
		printf("有两个相等实数根且为%lf %lf\n",j1,j2);
    return 0;
}
