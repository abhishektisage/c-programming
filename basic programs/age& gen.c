#include<stdio.h>
void main()
{
	int age;
	char gen;
	printf("enter the students age\n");
	scanf("%d",&age);
	printf("enter the gender of student\n");
	fflush(stdin);
	scanf("%c",&gen);
	
	printf("student age is %d\n",age);
	printf("student gen is %c",gen);
}

