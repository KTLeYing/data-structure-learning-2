#include<stdio.h>
int main()
{
    char x[10];
	int i,j,a=0,b=0,c=0,d=0;
	printf("������һ���ַ�:");
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
	printf("Ӣ����ĸ����Ϊ:%d\n",a);
	printf("�ո����Ϊ:%d\n",b);
	printf("���ָ���:%d\n",c);
	printf("�����ַ��ĸ���:%d\n",d);
	return 0;
}
