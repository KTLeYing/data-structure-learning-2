#include<stdio.h>
int main()
{
    int i;
	do
	{
	   printf("1:GQYҪŬ��!\n");
	   printf("2:MZLҲҪŬ��!\n");
	   printf("3:GQY��MZLһ��Ŭ��������֮�����ǻ���һ���!\n");
	   printf("4:We are together!\n");
	   printf("0:�˳�ϵͳ\n\n\n");
	   scanf("%d",&i);
	   switch(i)
	   {
	     case 1:
		    printf("��\n");
		    printf("GQYҪŬ��!\n\n\n");
		    break;
	     case 2:
		    printf("��\n");
		    printf("MZLҲҪŬ��!\n\n\n");
		    break;
	     case 3:
		    printf("��\n");
		    printf("GQY��MZLһ��Ŭ��,����֮�����ǻ���һ��!\n\n\n");
		    break;
	     case 4:
		    printf("��\n");
		    printf("We are together!\n\n\n");
		    break;
		 default:
			printf("We are together\n\n\n");
			break;
	   }
	}
	while(i);
    return 0;
}
