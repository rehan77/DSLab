#include<stdio.h>
#include<ctype.h>

typedef struct conversion
{
	char a[30];
	int top;
}stack;

void push(stack*,char);
{
	
}
char push(stack*);
{
	
}
void convert(char in[],char post[]);
{
	char opr;
	stack s1;
	int j=0,i;
	s1.top=-1;
	for(i=0;in[i]!="\0";i++)
	{
		if(isalpha(in[i])
		    post[j++]=in[i];
		if(in[i]=='(')
		push(&s1,in[i]);
		if(in[i]=='+'||in[i]=='-'||in[i]=='/'||in[i]=='*')
		{
			if(s1.top!=-1)
			{
				opr=pop(&s1);
				while(priority(opr)>=priority(in[i])
				{
					post[j++]=opr;
					opr=pop(&s1);
				}/home/aiktc/Documents/16co52/DSLab
				push(&s1,opr);
				push(&s1,in[i];
			}
			else
			push(&s1,in[i]);
		}
		if(in[i]==')')
		{
			opr=pop(&s1);
			while(opr!='(')
			{
				post[j++]=opr;
				opr=pop(&s1);
			}
		}
	}
	while(s1.top!=-1)
		post[j+=]=pop(&s1);
		post[j]='\0';
}
}	
int priority(char);
{
	 
}
int main()
{
	char infix[30],char postfix[30];
	printf("\nENTER INFIX EXPRESSION");
	scanf("%s",infix);
	convert(infix,postfix);
	printf("\nPOSTFIX EXPRESSION IS\n%s",postfix);
	

