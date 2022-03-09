#include"utils.h"
struct BST* search(struct BST* ptr,int d)
{
	if(ptr==NULL)
		printf("Data not found\n");
	else
	{
		if(d>ptr->data)
			return search(ptr->right,d);
		else if(d<ptr->data)
			return search(ptr->left,d);
		else
			return ptr; 
	}
}
