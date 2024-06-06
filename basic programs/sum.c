//wap to accept a four digit number from user and obtain sum of all digits
void main()
{
	int num,a,b,c,s;
	printf("enter any number\n");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num%10;
	c=num%10;
    num=num/10;
    s=a+b+c+num;
    printf("sum of all digits is %d",s);
}
