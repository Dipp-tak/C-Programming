//find the largest of three numbers.
#include<stdio.h>
int main()
{
	int num1, num2, num3;
	
	printf("Enter the three number");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
	if (num1 > num2)
	  {
	  	if (num1 > num3)
	  	{
	  	 	printf("Num1 is greater among three");
		}
		   else
		   {
		   	printf("Num3 is greater among three");
		   }
	  }
	  else if(num2 > num3)
	   printf("Num2 is greater among three");
	  else
	   printf("num3 is greater amon three");
	return 0;  
}
