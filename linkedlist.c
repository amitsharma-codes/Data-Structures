#include"utils.h"
int main()
{
	struct student* head=NULL;
	char choice;
	while(1)
	{
	printf("Enter the choice\na add at the last\nd display\nr rm at the last\nq quit\n");
	__fpurge(stdin);
	scanf("%c",&choice);
	switch(choice)
	{
		case 'a':head=addLast(head);break;
		case 'd':display(head);break;
		case 'r':head=removeLast(head);break;
		case 'q':return 0;
	}
	}
}
