#include"utils.h"
struct student* addLast(struct student* ptr)
{
	struct student* newnode=NULL,*temp=NULL;	
	newnode=calloc(1,sizeof(struct student));
	printf("Enter the roll\n");
	scanf("%d",&newnode->roll);	
	printf("Enter the name\n");
	scanf("%s",newnode->name);
	printf("Enter the marks\n");
	scanf("%f",&newnode->marks);	
	if(ptr==NULL)
	{
		ptr=newnode;
	}
	else
	{
		for(temp=ptr;temp->link;temp=temp->link);
		temp->link=newnode;
	}
	return ptr;
}
