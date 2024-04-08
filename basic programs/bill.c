// WAP to accept total bill amount from the user & print new bill amount after giving 15% discount
#include<stdio.h>
void main()
{
	int t_bill,d_bill,n_bill;
	printf("enter the total bill amount\n");
	scanf("%d",&t_bill);
	
	d_bill=(t_bill/100)*15;
	n_bill= t_bill-d_bill;
	
	printf("the new bill amount is %d \t",n_bill);
}
