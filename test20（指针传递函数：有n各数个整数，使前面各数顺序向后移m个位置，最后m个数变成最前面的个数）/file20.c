#include<stdio.h>
void move(int array[20],int x,int y);
int main()
{
    int num[20],n,m,i;
	printf("the amount of the number:");
	scanf("%d",&n);
	printf("intput %d个数:",n);
	for(i=0;i<n;i++) 
		scanf("%d",&num[i]);  //所要输入的数
    printf("the amount of number need to be moved: ");
	scanf("%d",&m); //需要移动的数量
	move(num,n,m);
	printf("the final sorted is:");
	for(i=0;i<n;i++)
		printf("%d ",num[i]);
	return 0;
}
void move(int array[20],int x,int y)
{
    int *p,i; 
    i=*(array+x-1);  //使指针指向最后一个数
	for(p=array+x-1;p>array;p--)
		*p=*(p-1);   //循环后移一次
    *array=i;  //循环后每次原来的最后一个数提到第一位
	y--;
	if(y>0)
		move(array,x,y);  //递归，自身调用，调用到要移动的次数才停止
	printf("\n");
}

