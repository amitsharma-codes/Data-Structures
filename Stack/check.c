#include<stdio.h>
#define MAX 100
int top = -1,stack[MAX];
void push(char n);
char pop();
int check(char *ptr);
int main(int argc, char *argv[])
{
	if(check(argv[1]))
		printf("The expression is balanced\n");
	else
		printf("The expression is imbalanced\n");
}
int check(char *ptr)
{
	int i;
	for(i=0;ptr[i];i++)
	{
		if((ptr[i]=='(') || (ptr[i]=='{') || (ptr[i]=='['))
			push(ptr[i]);
		else if(ptr[i]==')')
		{
			if(top==-1 || pop()!='(')
				break;
		}		
		else if(ptr[i]=='}')
		{
			if(top==-1 || pop()!='{')
				break;
		}	
		else if(ptr[i]==']')
		{
			if(top==-1 || pop()!='[')
				break;
		}
		else
		{}
	}
	if(ptr[i] || top!=-1)
		return 0;
	else	
		return 1;
}
void push(char n)
{
	stack[++top]=n;
}
char pop()
{
	return stack[top--];
}

