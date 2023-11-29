//XY coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>
int main()
{
	int x , y;
	printf("enter the valu of x coordinate");
	scanf("%d",&x);
	printf("enter the valu of y coordinate");
	scanf("%d",&y);
	
	if((x>0)&&(y>0))
	 printf("The coordinate point (%d,%d) lies in the First quadrant\n.",x,y);
	else if((x<0)&&(y>0))
	 printf("The coordinate point (%d,%d) lies in the Secound quadrant\n.",x,y);
	else if((x<0)&&(y<0))
	 printf("The coordinate point (%d,%d) lies in the Third quadrant\n.",x,y);
	else if((x>0)&&(y<0))
	 printf("The coordinate point (%d,%d) lies in the Fourth quadrant\n.",x,y);
	 
	return 0;
}
