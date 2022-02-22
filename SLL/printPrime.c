#include"utils.h"
int testPrime(int n)
{
	int i=2;
	if((n==1)||(n==0))
		return 0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void printPrime(struct student* ptr)
{
	struct student* temp=ptr;
	if(ptr==NULL)
	{
		printf("The list empty\n");
	}
	else
	{
	while(temp)
	{
		if(testPrime(temp->roll))
			printf("%d %s %f\n",temp->roll,temp->name,temp->marks);
		temp=temp->link;
	}
	}
}
