#include<stdio.h>
int main()
{
	int num;
	printf("Input the number to check it possitive or negative");
	scanf("%d",&num);
	if(0 <= num)
	 printf("The number is positive");
	else
	 printf("The number is negative");
	return 0;
}
