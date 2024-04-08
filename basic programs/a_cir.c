//WAP to accept radius of circle and calculate its area and circumference
#include<stdio.h>
void main()
{
	int r,area,circum,pi=3.14;
	printf("enter the radius of circle\n");
	scanf("%d",&r);
	
	area=pi*r*r;
	circum=2*pi*r;
	printf("the area of circle is %d\n",area);
	printf("the circumference of circle is %d\n",circum);
	
}
