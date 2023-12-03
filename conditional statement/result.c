#include<stdio.h>
#include<string.h>
int main()
{
	int roll , phy , chem , ca , tm;
	float per;
	char name[20];
	
	printf("input the Roll Number of the student:");
	scanf("%d",&roll);
	
	printf("\nInput the Name of the student:");
	scanf("%s",&name);
	
	printf("\nInput the marks of Physics, Chemistry and Computer Application :");
	scanf("%d %d %d",&phy,&chem,&ca);
	
	printf("\nRoll number: %d", roll);
	printf("Name:%s",name);
	
	printf("\nMarkes in computer application:%d",ca);
	tm = phy+chem+ca;
	
	printf("\nTotal Markes=%d",tm);
	per = (phy+chem+ca)/3.0;
	
	printf("\nPercentage=%f ",per);
	if(tm>=60)
	 printf("\nDivision = Frist");
	else if(tm<60 && tm>=48)
	 printf("\nDivision = Secound");
	else if(tm<48 && tm>=30)
	 printf("\nDivision = Third");
	else ("fail");
	
	return 0;
}
