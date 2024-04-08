//WAP to accept no. of hours from user and print its equivalent no. of minutes & no. of sec.
#include<stdio.h>
void main()
{
	int hr,min,sec;
	printf("enter the number of hours\n");
	scanf("%d",&hr);
	
	min=hr*60;
	sec=hr*3600;
	
	printf("no. of minutes is %d\n",min);
	printf("no. of seconds is %d",sec);
	
}
