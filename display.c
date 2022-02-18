#include"utils.h"
void display(struct student* ptr)
{
	if(ptr==NULL)
	{
		printf("The list is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
			ptr=ptr->link;
		}
	}
}
