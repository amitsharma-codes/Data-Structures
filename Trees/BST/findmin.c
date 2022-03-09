#include"utils.h"
struct BST* findmin(struct BST* ptr)
{
	if(ptr->left)
		return findmin(ptr->left);
	else
		return ptr;
}
