#include<stdio.h>
void move(int array[20],int x,int y);
int main()
{
    int num[20],n,m,i;
	printf("the amount of the number:");
	scanf("%d",&n);
	printf("intput %d����:",n);
	for(i=0;i<n;i++) 
		scanf("%d",&num[i]);  //��Ҫ�������
    printf("the amount of number need to be moved: ");
	scanf("%d",&m); //��Ҫ�ƶ�������
	move(num,n,m);
	printf("the final sorted is:");
	for(i=0;i<n;i++)
		printf("%d ",num[i]);
	return 0;
}
void move(int array[20],int x,int y)
{
    int *p,i; 
    i=*(array+x-1);  //ʹָ��ָ�����һ����
	for(p=array+x-1;p>array;p--)
		*p=*(p-1);   //ѭ������һ��
    *array=i;  //ѭ����ÿ��ԭ�������һ�����ᵽ��һλ
	y--;
	if(y>0)
		move(array,x,y);  //�ݹ飬������ã����õ�Ҫ�ƶ��Ĵ�����ֹͣ
	printf("\n");
}

