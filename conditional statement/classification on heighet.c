//classification on heighet
#include<stdio.h>
int main()
{
	float high;
	
	printf("Input the height in centimeters");
	scanf("%f",&high);
	
	if(high < 150.0)
	 printf("Dwarf");
	else if((high >= 150.0) && (high <= 165.0))
	 printf("average");
	else if((high >= 165.0) && (high <= 195.0))
	 printf("tall");
	else
	printf("abnormal");
	
	return 0;
}
