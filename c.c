#include<stdio.h>
#define N 88
int  MAX(int a[],int h)
{
	int tsum,max,j;
	tsum=max=0;
	for(j=0;j<h;j++)
	{
		tsum+=a[j];
		if(tsum>max)
			max=tsum;
		else if(tsum<0)
			tsum=0;
	}
	return max;
}
void main()
{
	int i,o[N],n,m;
	printf("请输入数组的个数：");
	scanf("%d",&n);
	printf("请输入数组的元素");
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		o[i]=m;
	}
	n=MAX(o,N);
	printf("最大子数组之和：%d\n",n);
}
