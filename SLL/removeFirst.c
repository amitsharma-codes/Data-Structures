#include"utils.h"
struct student* removeFirst(struct student* ptr)
{
	struct student *temp;
	if(ptr==NULL)
	{
		printf("The list is empty\n");
		return 0;
	}
	else
	{
		temp=ptr;
		ptr=ptr->link;
		free(temp);               //free the memory
	}
	return ptr;
}
