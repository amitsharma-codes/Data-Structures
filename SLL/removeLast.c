#include"utils.h"
struct student* removeLast(struct student* ptr)
{
	struct student *prev,*temp;
	if(ptr==NULL)
	{
		printf("The list is empty\n");
		return 0;
	}
	else
	{
		prev=NULL;
		temp=ptr;
		while(temp->link)         //Check if its a last node and traverse
		{
			prev=temp;
			temp=temp->link;
		}
		free(temp);               //free the memory
		if(prev)
			prev->link=NULL;  //put NULL in the previous node's link
		else
			ptr=NULL;
	}
	return ptr;
}
