#include<stdio.h>
int main()
{
    char x[10];
	int i,j,a=0,b=0,c=0,d=0;
	printf("请输入一行字符:");
	for(i=0;i<10;i++)
	   scanf("%c",&x[i]);
	for(i=0;i<10;i++)
	{
		if(x[i]>='a'&&x[i]<='z')
		   a++;
	   else
	     if(x[i]==' ')
		    b++;
		 else
			 if(x[i]>='0'&&x[i]<='1000')
				 c++;
			 else
				 d++;
	}
	printf("英文字母个数为:%d\n",a);
	printf("空格个数为:%d\n",b);
	printf("数字个数:%d\n",c);
	printf("其他字符的个数:%d\n",d);
	return 0;
}
