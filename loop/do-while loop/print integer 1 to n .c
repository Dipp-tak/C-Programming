#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Input the value of n:");
	scanf("%d",&n);
	do
	{
		printf("%d\n",i);
		i = i+1;
	}while(i<=n);
	return 0;
}
