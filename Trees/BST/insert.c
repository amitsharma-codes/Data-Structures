#include "utils.h"
struct BST* insert(struct BST* ptr,int d)
{
	if(ptr==NULL)
	{
		ptr=calloc(1,sizeof(struct BST));
		ptr->data=d;
	}
	else
	{
		if(d>ptr->data)
			ptr->right=insert(ptr->right,d);
		else if(d<ptr->data)
			ptr->left=insert(ptr->left,d);
		else
			printf("The data is already present\n");
	}
	return ptr;
}
