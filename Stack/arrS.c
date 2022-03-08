#include<stdio.h>
#define MAX 100
int top = -1,stack[MAX];
void push(int n);
int pop();
int peek();
int main()
{
	int n,choice;
	while(1)
	{
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:if(top==MAX-1)
			       {
				       printf("The stack is full\n");
			       }
			       else
			       {
				       printf("Enter the data to push\n");scanf("%d",&n);
				       push(n);
			       }
			       break;
			case 2:if(top==-1)
				       printf("Stack is empty\n");
			       else
				       printf("The poped data is %d\n",pop());
			       break;
			case 3:if(top==-1)
				       printf("Stack is empty\n");
			       else
				       printf("The peeked data is %d\n",peek());
			       break;
			case 4:return 0;
		}
	}
}
void push(int n)
{
	stack[++top]=n;
}
int pop()
{
	return stack[top--];
}
int peek()
{
	return stack[top];
}
