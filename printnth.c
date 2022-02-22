#include"utils.h"
void printn(struct student* ptr)
{
	int i=1,data;
	printf("Enter the nth node to be printed\n");
	scanf("%d",&data);
	if(ptr==NULL)
	{
		printf("The list is empty\n");
	}
	else
	{
		while(ptr)
		{
			if(i==data)
			printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
			ptr=ptr->link;
			i++;
		}
	}
}
