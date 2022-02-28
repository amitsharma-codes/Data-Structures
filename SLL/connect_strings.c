#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct string
{
	char s[20];
	struct string* link;
};
struct string* addfirst(struct string* ptr,char str[20]);
int main()
{
	char ch,str[20];
	char *buf=NULL;
	struct string *head=NULL,*temp; 
	int i=0,j=0;
	while((ch=fgetc(stdin))!='\n')
	{
		buf=realloc(buf,(i+1)*sizeof(char));
		buf[i++]=ch;
	}
	buf=realloc(buf,(i+1)*sizeof(char));
	buf[i]='\0';
	i=0;
	printf("%s\n",buf);
	while(buf[i]!='\0')
	{
		if((buf[i]==' '))
		{
			head=addfirst(head,str);
			str[j]='\0';
			j=0;
		}
		else
			str[j++]=buf[i++];
	}
	for(temp=head;temp;printf("%s->",temp->s),temp=temp->link);
//	printf("\b\b\n");
}
struct string* addfirst(struct string* ptr,char str[20])
{
	struct string* newnode;
	newnode=calloc(1,sizeof(struct string));
	strcpy(newnode->s,str);
	if(ptr==NULL)
		ptr=newnode;
	else
	{
		newnode->link=ptr;
		ptr=newnode;
	}
	return ptr;
}
