#include<stdio.h>
int main()
{
	int i=2,n;
	printf("Input the value of n:");
	scanf("%d",&n);
	do
	{
		printf("%d\n",i);
		i=i+2;
	} while(i<=n);
	return 0;
}
