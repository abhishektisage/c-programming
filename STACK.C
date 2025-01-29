//stack
#include<stdio.h>
int main()
{
	int stack[10];
	int ch,i,TOP=-1,ele;
	
	while(1)
	{
		printf("\n select options");
		printf("\n1-for push");
		printf("\n2-for pop operation");
		printf("\n3-for display");
		printf("provide your option :-\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1://performing push operation
			       if(TOP==9)
			       {
			       	printf("stack is overflow");
				   }
				   else
				   {
				   	printf("enter element to push");
				   	scanf("%d",&ele);
				   	stack[TOP+1]=ele;
				   	TOP++;
				   }
				   break;
			case 2://performing pop operatiom
			      if(TOP==-1)
				  {
				  	printf("stack is underflow");
				  	
			   	  }	
				 else {
				 	printf("top element %d is popped out from top end\n",stack[TOP]);
				 	TOP--;	
				 } 
				 break;
			case 3://performing display operation
			       if(TOP==-1)
				   {
				   	printf("nothing to display");
					} 
					else
					{
						for(i=TOP;i>=0;i--)
						{
							printf("%d\n",stack[i]);
						}
					}
		   case 4://exit  
		   	return 0; 
		   	default:
		   		printf("invalid choice");
		}
		
}  
return 0;
	
}
