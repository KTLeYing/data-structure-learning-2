#include <stdio.h>
int main()
{
    float i,j;
	printf("����Ϊ:");
	scanf("%f",&i);
	if(i<=50)
	{
		j=0.53*i;
		printf("֧�����Ϊ:%.2f\n",j);
	}
	else
		if(i>50)
		{
			j=0.58*i;
			printf("֧�����Ϊ:%.2f\n",j);
		}
	return 0;
}