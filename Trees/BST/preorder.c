#include"utils.h"
void preorder(struct BST* ptr)
{
	if(ptr)
	{
		printf("%d ",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
