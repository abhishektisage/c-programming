// wap to accept marks of 5 subject of a student & print its total aand average marks
#include<stdio.h>
int main()
{
	int  s1,s2,s3,s4,s5,T;
	float avg;
	
	printf("enter the marks of 5 subjects\n");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	
	T=s1+s2+s3+s4+s5;
	avg=T/5;
	
	printf("total marks is : %d\n",T);
	printf("average marks is : %f\n",avg);
	
}
