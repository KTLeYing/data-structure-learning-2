#include<stdio.h>
int main()
{
    printf("float占用%d字节\n",sizeof(float));
	printf("char占用%d字节\n",sizeof(char));
	printf("int占用%d字节\n",sizeof(int));
	printf("double占用%d字节\n",sizeof(double));
	printf("long double占用%d字节\n",sizeof(long double));
	return 0;
}
