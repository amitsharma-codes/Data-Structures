#include"utils.h"
void check(struct student *ptr)
{
	struct student *temp=NULL;
	temp=ptr->link;
	while(temp && temp!=ptr)
	{
		temp=temp->link;
	}
	if(temp)
		printf("Its a circular list\n");
	else
		printf("Its a single linked list\n");
}
