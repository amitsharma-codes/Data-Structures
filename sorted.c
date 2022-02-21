#include"utils.h"
#define ROLL 1
struct student *addSorted(struct student* ptr)
{
#if(ROLL)
	struct student *newnode,*temp,*prev;
	newnode=calloc(1,sizeof(struct student*));
	printf("Enter the roll\n");
	scanf("%d",&newnode->roll);	
	printf("Enter the name\n");
	scanf("%s",newnode->name);
	printf("Enter the marks\n");
	scanf("%f",&newnode->marks);
	if(ptr==NULL)
		ptr=newnode;
	else
	{
		while(temp&&(temp->roll<newnode->roll))
		{
			prev=temp;
			temp=temp->link;
		}
		prev->link=newnode;
		newnode->link=temp;
	}
#endif
}
