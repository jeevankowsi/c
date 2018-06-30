#include <stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	if(a%400==0&&a!=100&&a%4==0)
	{
		printf("the year is leap year");
	}	
	else
	{
		printf("the year is not leap year");	
	}
}
