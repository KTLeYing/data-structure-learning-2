#include<stdio.h>
int main()
{
    int i,j;
	char c='a';
	printf("��������������:");
	scanf("%d%d",&i,&j);
	printf("%d,��ʾΪ%c\n",i,i);
	printf("%d,��ʾΪ%c\n",j,j);
	printf("%c,��ʾΪ%d\n",c,c);
	c=c+1;
	printf("%c,��ʾΪ%d\n",c,c);
	return 0;
}

