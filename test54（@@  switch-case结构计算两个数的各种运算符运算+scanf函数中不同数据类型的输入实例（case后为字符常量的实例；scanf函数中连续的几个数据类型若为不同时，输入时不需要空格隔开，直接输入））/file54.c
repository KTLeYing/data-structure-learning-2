#include<stdio.h>
int main()
{
    int a,b,sum;
	char w;
	printf("����:");
	scanf("%d%c%d",&a,&w,&b);
	switch(w)
	{
	case('+'):
		sum=a+b;
		printf("%d+%d=%d\n",a,b,sum);
		break;
	case('-'):
		sum=a-b;
		printf("%d-%d=%d\n",a,b,sum);
		break;
	case('*'):
		sum=a*b;
		printf("%d*%d=%d\n",a,b,sum);
		break;
	case('/'):
		sum=a/b;
		printf("%d/%d=%d\n",a,b,sum);
	    break;
	case('%'):
		sum=a%b;
		printf("%d %% %d=%d\n",a,b,sum);
		break;
	default:
		printf("�������\n");
	}
	return 0;
}
