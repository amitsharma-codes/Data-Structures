#include"utils.h"
struct BST* findmax(struct BST* ptr)
{
	if(ptr->right)
		return findmax(ptr->right);
	else
		return ptr;
}
