#include <stdio.h>
int main()
{
    float i,j;
	printf("电量为:");
	scanf("%f",&i);
	if(i<=50)
	{
		j=0.53*i;
		printf("支出电费为:%.2f\n",j);
	}
	else
		if(i>50)
		{
			j=0.58*i;
			printf("支出电费为:%.2f\n",j);
		}
	return 0;
}