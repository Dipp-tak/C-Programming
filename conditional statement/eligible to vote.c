//eligible to vote
#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age to check if you are eligible to vot or not");
	scanf("%d",&age);
	if(age >= 18)
	 printf("eligible");
	else
	 printf("not eligible");
	return 0;
}
