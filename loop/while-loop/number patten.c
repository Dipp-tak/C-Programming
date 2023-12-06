#include<stdio.h>
int main()
{
	int i,j,row;
	printf("Enter the value of rows:");
	scanf("%d",&row);
	
	while(i<=row)
	{
		j = 1;
		while(j<=i)
		{
			printf("%d",j);
			j++;
			
		}
		i++;
		printf("\n");
	}
	return 0;
}
