
/* Print a dynamic array of Primes in a range */

/* Create an issue if you find a bug THANK YOU */

#include<stdio.h>
#include<stdlib.h>
void print(int* arr,int max);
int* storePrime(int min,int max);
int main()
{
	int min,max,*arr;
	scanf("%d%d",&min,&max);
	arr=storePrime(min,max);//store primes
	print(arr,max);// and print them
}
int testPrime(int n)//you know this 
{
	if((n==1)||(n==0))return 0;
	for(int i=2;i<=n/2;i++)
		if(n%i==0)
			return 0;
       return 1;	
}
int* storePrime(int min,int max)
{
	static int *p;int i;
	p=(int*)realloc(NULL,sizeof(int));//initialize the dynamic array in heap
	p[0]=0;
	i=1;
	do                             //do once atleast
	{
		if(testPrime(min))     
		{
			p[i-1]=min;  //store one by one
			i++;
			p=(int*)realloc(p,(i)*sizeof(int));
			//extend the size as you go 
		}
		min++; //go to next value
	}while(p[i-2]<=max);//can use for loop too but it uses entry level
	//condition,the condition used here can make pointer go berserk
	//i.e. it points to the address just one before its base address
	//which can cause segment fault or get undesired results
	//though I didn't get, better to be ready. 
	p=(int*)realloc(p,(i-1)*sizeof(int));
	return p;
}
void print(int* p,int max)//you know this
{
	for(int i=0;p[i]<=max;i++)
		printf("%d ",p[i]);
	printf("\n");
}
