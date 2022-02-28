#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
struct some
{
	int data;
	struct some* link;
};
int count;
struct some* tp;
struct some* addlast(struct some* ptr);
int detectLoop(struct some* ptr);
int main()
{
	char c='Y';
	struct some *head,*temp;
	while(c=='Y' || c=='y')
	{
		head=addlast(head);
		printf("Want to add a node Y/N?\n");
		__fpurge(stdin);
		scanf("%c",&c);
	}
	if(detectLoop(head))
		printf("The linked list is IN a loop\n");
	else
		printf("The linked list is NOT IN a loop\n");
	for(temp=head;temp;printf("%d-->",temp->data),temp=temp->link);
	printf("\n");
}
struct some* addlast(struct some* ptr)
{
	struct some* newnode=NULL,*temp;
	newnode=calloc(1,sizeof(struct some));
	printf("Enter the data\n");
	scanf("%d",&newnode->data);
	count++;
	if(ptr==NULL)
	{
		ptr=newnode;
	}
	else
	{
		for(temp=ptr;(temp->link)&&(temp!=tp);temp=temp->link);
		if(count==8)
		temp->link=tp;
		else
		temp->link=newnode;
		if(count==4)
			tp=newnode;
	}
	return ptr;
}
int detectLoop(struct some* ptr)
{
	struct some *sP,*fP;
	for(sP=fP=ptr;(fP&&fP->link)&&(fP==sP);fP=fP->link->link,sP=sP->link);
	if(fP==sP)
		return 1;
	else
		return 0;
}
