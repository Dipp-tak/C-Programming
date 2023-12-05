#include<stdio.h>
int main()

{
	int num1,num2,opt; 
	
	printf("Enter the first Integer :");
    scanf("%d",&num1);
    printf("Enter the second Integer :");
  	scanf("%d",&num2);
  	
  	printf("\nInput your option :\n");
 	printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
 	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			printf("\nAddition of %d and %d is:",num1,num2,num1+num2);
			break;
			
		case 2:
			printf("\nSubtration %d from %d is:",num1,num2,num1-num2);
			break;
			
		case 3:
			printf("\nMultiplication of %d and %d is:",num1,num2,num1*num2);
			break;
			
		case 4:
			if( num2 == 0)
			{
				printf("\nIt's doesn't possible");
			}
			 else
			{
			 printf("\nDivision of of %d and %d is:",num1,num2,num1/num2);
			}
		case 5:
			printf("\nexit");
			break;
			
		default:
			printf("\nInput correct option");
			break;
	}
return 0;
	
}
