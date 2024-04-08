//wap to accept two integer from user and obtain the sum of last two digit
#include<stdio.h>
void main()
{
	int num1,num2,ld1,ld2,sum;
	printf("enter any 2 intergers\n ");
	scanf("%d %d",&num1,&num2);
	
	ld1=num1%10;
	ld2=num2%10;
	
	sum=ld1+ld2;
	printf("sum of last digit of two integer is %d",sum);
 } 
