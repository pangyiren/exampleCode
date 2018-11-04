#include<stdio.h>
int main()
{
	int a[100]={0};   //注意 此处应该初始化为0 否则在下面会出现问题
    int b,c,i,n,j,k,sum=0;
	int isPrime(int x);
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=2;j<a[i];j++)
		{
			for(k=2;k<a[i];k++)
			{
				 
			 if(isPrime(j)==1&&isPrime(k)==1&&a[i]==j+k&&j<=k)
			  {
			   	printf("%d %d\n",j,k);
			   	i++;      //在最后一个判断完成后 数组跳到有效数字外 为0 不满足跳出内部两层循环
			   	j=2;
			   	k=2;
				
			  }
			}
		}
	}
	return 0;
}
int isPrime(int x)
{
	int i,sum=0,b;
	for(i=2;i<x;i++)
	{
		if(x%i==0)sum++;
	}
	if(sum==0)b=1;
	else b=0;
	return b;
}