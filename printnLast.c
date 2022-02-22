#include"utils.h"
void printnLast(struct student* ptr)
{
	struct student* temp;int i=0,data;
	printf("Enter the nth node to be printed\n");
	__fpurge(stdin);
	scanf("%d",&data);
	printf("i %d data %d",i,data);
	if(ptr==NULL)
	{
		printf("The list is empty\n");
	}
	else
	{
		while(temp)
		{
			temp=temp->link;
			i++;
		}
		if(data<i)
		{
			data=i-data;
			printf("i %d data %d",i,data);
			i=0;
			while(ptr)
			{
				if(i==data)
				printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
				ptr=ptr->link;
				i++;
			}
		}
		else
			printf("Invalid data entered\n");
	}

}
