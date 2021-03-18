#include<stdio.h>
int main()
{
    char c;
	int x=0,y=0,z=0,t=0;
	printf("请输入一行字符:");
	while((c=getchar())!='\n')
	{ 
	    if(c>='0'&& c<='9')
			x++;
		else
			if(c>='a'&& c<='z' || c>='A' && c<='Z')
			   y++;
			else
				if(c==' ')
					z++;
				else
					t++;
	}
	printf("数字有%d个\n",x);
	printf("英文字母有%d个\n",y);
	printf("空格有%d个\n",z);
	printf("其他字符%d\n",t);
	return 0;
}
