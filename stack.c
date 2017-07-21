#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int stack[MAX_SIZE],top=-1;
int isFull()
{
     return (top==MAX_SIZE)?1:-1;
 }    
 int isEmpty()
 {
	 return (top==-1)?1:-1;
 }
 int peek()
 {
	return stack[top];
}
void push(int e)
{
	if(!isFull())
	{
		top++;
		e=stack[top];
		printf("Element %d successfully entered",e);
	}
	else{
		printf("stack overflow");
	}
}
void pop()
{
	int d;
	if(!isEmpty())
	{
		d=stack[top];
		top--;
		printf("Element %d successfully deleted",d);
	}
	else{
		printf("stack underflow");
	}
}

int main()
{
	int choice,e;
	do
	{
		printf("Enter your choice\n1.Peek\n2.Push\n3.Pop\n4.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:peek();
			break;
			case 2:push();
			break;
			case 3:pop();
			break;
			case 4:exit();
			break;
			default:printf("invalid choice");
break;
}
while(1);
return 0;
}

			 



















	     
