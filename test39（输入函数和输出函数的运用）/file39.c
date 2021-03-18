#include<stdio.h>
int main()
{
	int a,b;
	float x,y;
	char c1='A',c2='a';
    printf("请输入两个数:");
	scanf("%d%d",&a,&b);
	printf("%d %d\n",a,b);
    printf("请输入两个数:");
	scanf("%f%f",&x,&y);
    printf("%f %f\n",x,y);
    printf("请输入两个字符:");
	scanf("%c%c",&c1,&c2);
	printf("%c%c\n",c1,c2);
	return 0;
}
