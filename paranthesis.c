#include<ctype.h>
#define MAX 100

typedef struct stack
{
	char a[MAX];
	int top;
}stack;

void push(struct stack *ps,char n)
{
	if(ps->top!=MAX-1)
	{
		ps->top++;
		ps->a[ps->top]=n;
	}
	else
		printf("\nSTACK IS FULL");
}

char pop(struct stack *ps)
{
	return(ps->a[ps->top--]);
}
int isMatchingpair(char left,char right)
{
switch(left)
 { 
  case'(':
         if(right==')')
         return 1;
         else
         return 0;
  case'{':
         if(right=='}')
         return 1;
			else
			return 0;
  case'[':
			if(right==']')
         return 1;
			else
			return 0;
  default:
         return 0;
    }
 void checkbalanced(char exp[])  
 {
	int i;
	char stack s,c;
	int top=-1,i=0;
	while(exp[i]!='\0')
	{ 	
		if(exp[i]=='(','{','[')
		{
			c.push(&s);
          }
          else
          {
			  if(isEmpty(&s))
			  {
				  printf("invalid expression");
				  return;
			  }
		  
			  else
			  {
				  c=pop(&s);
			  }
		  }
			  if(isMatchingpair(c,exp[i]))
			  {
				  continue 
			  }
			  else
			  {
				  printf("EXPRESSION INVALID");
				  return;
			  }
		  }
int main()
{
	char exp[30];
	int result;
	printf("ENTER A EXPRESSION CONTAINING PARENTHESIS\n");
	scanf("%s",exp);
   checkbalanced(exp);
   return 0;
}
