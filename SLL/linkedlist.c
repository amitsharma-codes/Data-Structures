#include"utils.h"
int main()
{
	struct student* head=NULL;
	int choice;
	while(1)
	{
	printf("Enter the choice\n1. add at the last\n2. display\n3. rm at the last\n4. add at the first\n5. rm at the first\n");
	printf("6.add in sorted order\n7. print middle node(s)\n8.printPrime\n9. quit\n");
	printf("10. Del all\n11. print nth\n12. print n from last\n");
	__fpurge(stdin);
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:head=addLast(head);break;
		case 2:display(head);break;
		case 3:head=removeLast(head);break;
		case 4:head=addFirst(head);break;
		case 5:head=removeFirst(head);break;
		case 6:head=addSorted(head);break;
		case 7:middle(head);break;
		case 8:printPrime(head);break;
		case 9:return 0;
		case 10:head=DelAll(head);break;
		case 11:printn(head);break;
		case 12:printnLast(head);break;
	}
	}
}