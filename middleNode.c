#include"utils.h"
void middle(struct student* sptr)
{
	struct student *fptr,*prev;
	fptr=sptr;
	while(fptr&&fptr->link)
	{
		fptr=fptr->link->link;
		prev=sptr;
		sptr=sptr->link;
	}
	if(fptr==NULL)
	{
		printf("%d %s %f\n",prev->roll,prev->name,prev->marks);
		printf("%d %s %f\n",sptr->roll,sptr->name,sptr->marks);
	}
	else
		printf("%d %s %f\n",sptr->roll,sptr->name,sptr->marks);
}
