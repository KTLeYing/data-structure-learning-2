#include<stdio.h>
int main()
{
    int a,b,c,max;	
	printf("请输入第三个整数:");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b?a:b);
	max=(c>max?c:max);
	printf("请输出最大数:%d\n",max);
    return 0;
}
