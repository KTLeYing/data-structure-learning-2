#include<stdio.h>
int main()
{
    char c;
	int x=0,y=0,z=0,t=0;
	printf("������һ���ַ�:");
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
	printf("������%d��\n",x);
	printf("Ӣ����ĸ��%d��\n",y);
	printf("�ո���%d��\n",z);
	printf("�����ַ�%d\n",t);
	return 0;
}
