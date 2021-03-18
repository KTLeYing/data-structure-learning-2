#include<stdio.h>
void swap(int *m,int *n);
int main()
{
    int a,b,c,*p1,*p2,*p3;
	printf("请输出三个数:");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	if(a>b)
		swap(p1,p2);
	if(a>c)
		swap(p1,p3);
	if(b>c)
	    swap(p2,p3);
    printf("the sorted of the number from small to big is:%d %d %d\n",*p1,*p2,*p3);
	return 0;  
}
void swap(int *m,int *n)
{
    int t;
	t=*m;
	*m=*n;
	*n=t;
}


























































































































	  
	
