#include<stdio.h>
int main()
{
	int i,row,j;
	printf("Enter the number of rows:");
	scanf("%d",&row);
	while(i<=row)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
