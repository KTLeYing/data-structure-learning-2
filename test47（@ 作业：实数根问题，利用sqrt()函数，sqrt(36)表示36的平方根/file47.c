#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i;
	double j1,j2;
	printf("������������:");
	scanf("%d%d%d",&a,&b,&c);
	i=b*b-4*a*c;
	j1=-b+sqrt(i)/2*a;
	j2=-b-sqrt(i)/2*a;
	if(i!=0)
	  if(i>0)
	    printf("����������ʵ����Ϊ%lf %lf\n",j1,j2);
	  else
		printf("û��ʵ����\n");
	else
		printf("���������ʵ������Ϊ%lf %lf\n",j1,j2);
    return 0;
}
