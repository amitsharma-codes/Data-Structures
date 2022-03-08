#include<stdio.h>
#include<string.h>
#define MAX 100
int top = -1;
char stack[MAX];
void push(char n);
char pop();
int check(char *ptr);
int priority(char symbol)
{
	switch(symbol)
	{
		case '(':
			return 0;
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
		case '%':
			return 2;
		case '^':
			return 3;
	}
}
int main(int argc, char *argv[])
{
	int i,j=0,con=0;
	char post[MAX],temp,ptr[100],sign;
	strcpy(ptr,argv[1]);

	printf("%s\n",ptr);
	for(i=0;ptr[i];i++)
	{
		sign=ptr[i];
		switch(sign)
		{
		case '(':
			push(sign);
			break;
		case ')':
		//	while((temp=pop())!='(')
				post[con++]=temp;
				break;
		case '+':					
		case '-':
		case '*':
		case '/':
		case '%':
		case '^':
		while((top!=-1)&&priority(stack[top])>=priority(sign))
			post[con++]=pop();
		push(sign);
		break;
		default:
		post[con++]=sign;
		}
	}
	while(top!=-1)
		post[con++]=pop();
	post[con]='\0';
	printf("%s\n",post);
}
void push(char n)
{
	if(top=MAX-1)
		printf("stack full\n");
	else
		stack[++top]=n;
}
char pop()
{
	if(top==-1)
		printf("stack is empty\n");
	else
		return stack[top--];
}

