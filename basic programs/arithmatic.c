// wap to accept two intergers from user and perform all arithmatic operations 
#include<stdio.h>
void main()
{
	int num1,num2,sum,sub,mul,div,mdiv;
	printf("enter two intergers\n");
	scanf("%d %d",&num1,&num2);
	
	sum=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mdiv=num1%num2;
	
	printf("sum is %d\n",sum);
	printf("sub is %d\n",sub);
	printf("mul is %d\n",mul);
	printf("div is %d\n",div);
	printf("mdiv is %d\n",mdiv);
	
	
}
