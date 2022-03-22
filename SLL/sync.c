#include"utils.h"
#include"string.h"
struct student* sync()
{
	FILE *fp;
	struct student *ptr=NULL,var,*new,*temp;
	fp=fopen("file.txt","r");
	while(fread(&var,sizeof(struct student)-sizeof(struct student*),1,fp)==1)
	{
		new=calloc(1,sizeof(struct student));
		new->roll=var.roll;
		strcpy(new->name,var.name);
		new->marks=var.marks;
		if(ptr==NULL)
		{
			ptr=new;
		}
		else
		{
			for(temp=ptr;temp->link;temp=temp->link);
			temp->link=new;
		}
	}
	return ptr;
}
