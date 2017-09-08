#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int queue[MAX_SIZE],front=-1,rear=-1;
int isFull()
{
     return (rear==MAX_SIZE-1)?1:-1;
 }    
 int isEmpty()
 {
	 return (front==-1 && rear==-1)?1:-1;
 }
 void display()
 {
	 int i;
	 printf("The elements of the queue are\n");
	 for(i=front;i<=rear;i++)
	 {
		 printf("\t%d",queue[i]);
	 }
}
 void insert(int d)
 {
	if(!isFull())
	{
		if(isEmpty())
		{
			front++;
		}
		d=queue[rear];
		rear++;
		printf("Element %d is successfully inserted\n",d);
	}
	else
	{
		printf("Element cannot be inserted\n");
	}
}
 void delete()
 {
	int d;
	if(!isEmpty())
	{
		d=queue[front];
		if(front==rear)
		front=rear=-1;
		else
		front++;
	printf("Element deleted is %d\n ",d);
}
else
{
	printf("The queue is empty!\n");
}
}

int main()
{
	int choice,e;
	do
	{
		printf("Enter your choice\n1.Display\n2.Insert\n3.Delete\n4.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:if(!isEmpty())
			display();
			else
			printf("The queue is empty\n");
			break;
			case 2:printf("Enter an element to be inserted\n");
			scanf("%d",&e);
			insert(e);
			break;
			case 3:delete();
			break;
			case 4:exit(0);
			break;
			default:printf("invalid choice\n");
break;
}
}while(1);
return 0;
}

			 



















	     
