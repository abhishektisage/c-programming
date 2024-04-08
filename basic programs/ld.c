//WAP to accept an integer from the use and prints its last digit
#include<stdio.h>
void main()
{
	int num,ld;
	printf("enter any number \n");
	scanf("%d",&num);
	
	ld=num%10;
	printf("the last digit is:- %d",ld);
}
