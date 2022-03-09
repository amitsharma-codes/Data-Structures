#ifndef __UTILS_H__
#define __UTILS_H__
#include<stdio.h>
#include<stdlib.h>
struct BST
{
	int data;
	struct BST *left,*right;
};
struct BST* insert(struct BST*,int);
struct BST* Del(struct BST*,int);
struct BST* search(struct BST*,int);
struct BST* findmin(struct BST*);
struct BST* findmax(struct BST*);
void preorder(struct BST*);//root left right
void inorder(struct BST*);//left root right
void postorder(struct BST*);//left right root
#endif
