#include"utils.h"
struct BST * Del(struct BST *ptr,int d)
{
	struct BST *temp=NULL;
	if(ptr==NULL)
	{
		printf("%d is not found\n",d);
	}
	else if(d < ptr->data)
	{
		ptr->left=Del(ptr->left,d);
	}
	else if(d > ptr->data)
	{
		ptr->right=Del(ptr->right,d);
	}
	else
	{
		// data matching with ptr data
		if(ptr->left && ptr->right) // ptr having 2 children
		{
			temp=findmin(ptr->right);
			ptr->data=temp->data;
			ptr->right=Del(ptr->right,temp->data);
		}
		else // having single child or zero child
		{
			temp=ptr;
			if(ptr->left==NULL)
				ptr=ptr->right;
			else
				ptr=ptr->left;
			free(temp);
			temp=NULL;
		}
	}
	return ptr;
}

