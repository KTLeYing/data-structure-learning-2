#include<stdio.h>
int main()
{
    char a;
	printf("������һ���ַ�:");
	scanf("%c",&a);
	if(a>65 && a<90)
	  printf("��������Ǵ�д��ĸ\n");
	else
	   if(a>97 && a<122)
		 printf("���������Сд��ĸ\n");
	   else
		  if(a>48 && a<57)
			printf("�������������");
		  else
			  printf("����������������");
	return 0;
}
