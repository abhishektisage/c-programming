//QUEUE
#include<stdio.h>
void main()
{
	int queue[10];
	int FRONT=0,REAR=-1,ch,i,ele;
	
	while(1)
	{  
	
		printf("1-for enqueue operation\n");
		printf("2-for dequeue operation\n");
		printf("3-for displaying the queue\n");
		printf("4-for exit operation\n");
		printf("provide your choice\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1 ://performing enqueue operation
			        if(REAR==9)
			        {
			        printf("QUEUE IS OVERFLOW\n");
					}
					else
					{
						printf("enter any element\n");
						scanf("%d",&ele);
						queue[REAR+1]=ele;
						REAR++;
						
					}
					break;
			case 2://performing dequeue operation
			       if(FRONT==REAR+1)	
				   {
				   	printf("QUEUE IS UNDERFLOW\n");
				   }
				   else{
				   	printf("FRONT element %d is dequeued\n",queue[FRONT]);
				   	FRONT++;
				   }
				   break;
			case 3://displaying queue
			       if(FRONT==REAR+1)
				   {
				   	printf("NOTHING TO DISPLAY QUEUE IS EMPTY\n");
				   }	   	
				   else
				   {
				   	for(i=FRONT;i<=REAR;i++)
				   	{
				   	   printf("%d \t",queue[i]);
						  	
					}
				   }
				   break;
			case 4://exit operation
			       {
			       	return 0;
			    	
				}
				break;
			default:
			{
				printf("invalid choice");
					   }		   
		}

	}
}
