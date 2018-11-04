#include<stdio.h>
int main()
{
   char  a[100];
	int n,i,b;
	scanf("%d",&n);
	//getchar();
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
		//printf("%d %c",i,a[i]);
	}
	
	printf("**%c",a[1]);
	return 0;
}
