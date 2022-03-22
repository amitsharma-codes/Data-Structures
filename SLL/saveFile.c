#include"utils.h"
void save(struct student* ptr)
{
	FILE *fp;
	fp=fopen("file.txt","w");
	if(fp)
	{
	while(ptr)
	{
		fwrite(ptr,sizeof(struct student)-sizeof(struct student*),1,fp);
		ptr=ptr->link;
	}
	}
	else
		printf("Could not open file\n");
}
