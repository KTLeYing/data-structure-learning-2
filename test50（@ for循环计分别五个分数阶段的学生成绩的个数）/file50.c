#include<stdio.h>
int main()
{

    int s,m,n,d1=0,d2=0,d3=0,d4=0,d5=0;
	printf("ͬѧ����Ϊ:");
	scanf("%d",&n);
	for(s=1;s<=n;s++)
	{
		printf("�������%d��ѧ���ɼ�:",s);
		scanf("%d",&m);
		if(m>=90 && m<=100)
			d1++;
		else
			if(m>=80 && m<=89)
				d2++;
			else
				if(m>=70 && m<=79)
					d3++;
				else
					if(m>=60 && m<=69)
				    	d4++;
					else 
					    if(m>=0 && m<=59)
						   d5++;
	}
	printf("A�ȼ���%d��\n",d1);
	printf("B�ȼ���%d��\n",d2);
	printf("C�ȼ���%d��\n",d3);
	printf("D�ȼ���%d��\n",d4);
	printf("E�ȼ���%d��\n",d5);
	return 0;
}
