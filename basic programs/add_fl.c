//wap to accept a 4 digit number from user and obtain sum of its first and last digit
#include<stdio.h>
void main()
{
	int num,a,b,c;
	printf("enter any number\n");
	scanf("%d",&num);
	
	a=num/1000;
	b=num%10;
	c=a+b;
	printf("sum of first and last digit is %d ",c);
	
}
